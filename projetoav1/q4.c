#include <stdio.h>
#include <stdlib.h>

long long calcular_fatorial(int n) {
    if (n <= 1) return 1;
    long long fat = 1;
    for (int i = 2; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

long long processar_vetor(int n, int vetor[n]) {
    printf("\nVetor (tamanho %d):\n", n);
    for(int i = 0; i < (n < 50 ? n : 50); i++) {
        printf("%d ", vetor[i]);
    }
    if(n > 50) printf("...");
    printf("\n");
    
    printf("\nProcessamento:\n");
    
    long long somatorio = 0;
    
    for(int i = 0; i < n; i++) {
        if(vetor[i] % 2 == 0) {
            printf("vetor[%d] = %d (PAR) -> soma: +%d\n", i, vetor[i], vetor[i]);
            somatorio += vetor[i];
        } else {
            long long fat = calcular_fatorial(vetor[i]);
            printf("vetor[%d] = %d (IMPAR) -> fatorial: %lld\n", i, vetor[i], fat);
            somatorio += fat;
        }
    }
    
    return somatorio;
}

void executar_q4() {
    int n;
    
    printf("\nDigite o tamanho do vetor (n): ");
    scanf("%d", &n);
    
    int vetor[n];
    
    printf("\nDeseja entrada manual (1) ou aleatoria (2)? ");
    int opcao;
    scanf("%d", &opcao);
    
    if(opcao == 1) {
        printf("\nPreenchendo vetor manualmente:\n");
        for(int i = 0; i < n; i++) {
            printf("Digite o elemento [%d]: ", i);
            scanf("%d", &vetor[i]);
        }
    } else {
        for(int i = 0; i < n; i++) {
            vetor[i] = (rand() % 15) + 1;
        }
        printf("\nVetor preenchido aleatoriamente!");
    }
    
    long long resultado = processar_vetor(n, vetor);
    
    printf("\nRESULTADO:\n");
    printf("Somatorio: %lld\n", resultado);
}

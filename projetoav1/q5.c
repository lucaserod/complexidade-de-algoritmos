#include <stdio.h>
#include <stdlib.h>

int busca_binaria(int n, int vetor[n], int alvo) {
    int inicio = 0;
    int fim = n - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (vetor[meio] == alvo) {
            return 1;
        }
        if (vetor[meio] < alvo) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return 0;
}

void ordenar_vetor(int vetor[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(vetor[j] > vetor[j+1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}

int contar_elementos(int n, int vetorA[n], int vetorB[n]) {
    printf("\nVetor A (nao ordenado) - primeiros 20 elementos:\n");
    for(int i = 0; i < (n < 20 ? n : 20); i++) {
        printf("%d ", vetorA[i]);
    }
    if(n > 20) printf("...");
    printf("\n");
    
    printf("\nVetor B (ordenado) - primeiros 20 elementos:\n");
    for(int i = 0; i < (n < 20 ? n : 20); i++) {
        printf("%d ", vetorB[i]);
    }
    if(n > 20) printf("...");
    printf("\n");
    
    printf("\nProcessando...\n");
    
    int total_encontrados = 0;
    
    for(int i = 0; i < n; i++) {
        if(busca_binaria(n, vetorB, vetorA[i])) {
            total_encontrados++;
        }
    }
    
    return total_encontrados;
}

void executar_q5() {
    int n;
    
    printf("\nDigite o tamanho dos vetores (n): ");
    scanf("%d", &n);
    
    int vetorA[n];
    int vetorB[n];
    
    printf("\nDeseja entrada manual (1) ou aleatoria (2)? ");
    int opcao;
    scanf("%d", &opcao);
    
    if(opcao == 1) {
        printf("\nPreenchendo vetor A manualmente:\n");
        for(int i = 0; i < n; i++) {
            printf("Digite o elemento [%d]: ", i);
            scanf("%d", &vetorA[i]);
        }
        printf("\nPreenchendo vetor B manualmente (DEVE ESTAR ORDENADO):\n");
        for(int i = 0; i < n; i++) {
            printf("Digite o elemento [%d]: ", i);
            scanf("%d", &vetorB[i]);
        }
    } else {
        for(int i = 0; i < n; i++) {
            vetorA[i] = (rand() % 200) + 1;
            vetorB[i] = (rand() % 200) + 1;
        }
        ordenar_vetor(vetorB, n);
        printf("\nVetores preenchidos aleatoriamente! Vetor B foi ordenado.");
    }
    
    int resultado = contar_elementos(n, vetorA, vetorB);
    
    printf("\nRESULTADO:\n");
    printf("Total de elementos de A encontrados em B: %d\n", resultado);
}

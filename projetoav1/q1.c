#include <stdio.h>
#include <stdlib.h>

int ler_opcao_entrada() {
    int opcao;
    printf("\nDeseja entrada manual (1) ou aleatoria (2)? ");
    scanf("%d", &opcao);
    return opcao;
}

void preencher_vetor_manual(int vetor[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("Digite o elemento [%d]: ", i);
        scanf("%d", &vetor[i]);
    }
}

void preencher_vetor_aleatorio(int vetor[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        vetor[i] = (rand() % 100) + 1;
    }
}

void exibir_vetor(int vetor[], int tamanho, char *nome) {
    printf("\n%s (tamanho %d):\n", nome, tamanho);
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void contagem(int n, int k, int vetorInteiro[n], int listaElementos[k]) {
    int somaTotal = 0;
    
    exibir_vetor(vetorInteiro, n, "Vetor Principal");
    exibir_vetor(listaElementos, k, "Vetor Buscados");
    
    printf("\nRESULTADO:\n");
    
    for(int i = 0; i < k; i++) {
        int contagem_elemento = 0;
        for(int j = 0; j < n; j++) {
            if(vetorInteiro[j] == listaElementos[i]) {
                contagem_elemento++;
            }
        }
        printf("[%d aparece %d vez(es)]\n", listaElementos[i], contagem_elemento);
        somaTotal += contagem_elemento;
    }
    printf("Soma total: %d\n", somaTotal);
}

void executar_q1() {
    int n, k;
    
    printf("\nDigite o tamanho do vetor principal (n): ");
    scanf("%d", &n);
    printf("Digite a quantidade de buscados (k): ");
    scanf("%d", &k);
    
    int vetorInteiro[n];
    int listaElementos[k];
    
    int opcao = ler_opcao_entrada();
    
    if(opcao == 1) {
        printf("\nPreenchendo vetor principal manualmente:\n");
        preencher_vetor_manual(vetorInteiro, n);
        printf("Preenchendo vetor de buscados manualmente:\n");
        preencher_vetor_manual(listaElementos, k);
    } else {
        preencher_vetor_aleatorio(vetorInteiro, n);
        preencher_vetor_aleatorio(listaElementos, k);
        printf("\nDados preenchidos aleatoriamente!");
    }
    
    contagem(n, k, vetorInteiro, listaElementos);
}

#include <stdio.h>
#include <stdlib.h>

void preencher_matriz3d_manual(int n, int matriz[n][n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                printf("Digite matriz[%d][%d][%d]: ", i, j, k);
                scanf("%d", &matriz[i][j][k]);
            }
        }
    }
}

void preencher_matriz3d_aleatorio(int n, int matriz[n][n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                matriz[i][j][k] = (rand() % 100) + 1;
            }
        }
    }
}

void exibir_matriz3d_resumido(int n, int matriz[n][n][n]) {
    printf("\nMatriz (%dx%dx%d) - Primeiros elementos:\n", n, n, n);
    for(int i = 0; i < (n < 2 ? n : 2); i++) {
        printf("Camada %d:\n", i);
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                printf("%4d ", matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int comparaMatrizes3D(int n, int matrizA[n][n][n], int matrizB[n][n][n]) {
    exibir_matriz3d_resumido(n, matrizA);
    
    long long somaA = 0, somaB = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                somaA += matrizA[i][j][k];
                somaB += matrizB[i][j][k];
            }
        }
    }
    
    printf("RESULTADO:\n");
    printf("Soma A: %lld\n", somaA);
    printf("Soma B: %lld\n", somaB);
    
    if(somaA >= somaB) {
        printf("A >= B? SIM (retorna 1)\n");
        return 1;
    } else {
        printf("A >= B? NAO (retorna 0)\n");
        return 0;
    }
}

void executar_q3() {
    int n;
    
    printf("\nDigite o tamanho da matriz (n x n x n): ");
    scanf("%d", &n);
    
    int matrizA[n][n][n];
    int matrizB[n][n][n];
    
    printf("\nDeseja entrada manual (1) ou aleatoria (2)? ");
    int opcao;
    scanf("%d", &opcao);
    
    if(opcao == 1) {
        printf("\nPreenchendo matriz A manualmente:\n");
        preencher_matriz3d_manual(n, matrizA);
        printf("\nPreenchendo matriz B manualmente:\n");
        preencher_matriz3d_manual(n, matrizB);
    } else {
        preencher_matriz3d_aleatorio(n, matrizA);
        preencher_matriz3d_aleatorio(n, matrizB);
        printf("\nMatrizes preenchidas aleatoriamente!");
    }
    
    comparaMatrizes3D(n, matrizA, matrizB);
}

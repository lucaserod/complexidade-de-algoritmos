#include <stdio.h>
#include <stdlib.h>

void preencher_matriz_manual(int n, int m, int matriz[n][m]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("Digite matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void preencher_matriz_aleatorio(int n, int m, int matriz[n][m]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            matriz[i][j] = (rand() % 100) + 1;
        }
    }
}

void exibir_matriz(int n, int m, int matriz[n][m]) {
    printf("\nMatriz (%dx%d):\n", n, m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int multiplo5(int n, int matriz[n][n]) {
    exibir_matriz(n, n, matriz);
    
    int mult5 = 0;
    
    printf("\nVerificacoes (i <= j):\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i <= j) {
                int soma = matriz[i][j] + matriz[j][i];
                if(soma % 5 == 0) {
                    printf("matriz[%d][%d] + matriz[%d][%d] = %d + %d = %d (multiplo de 5)\n",
                           i, j, j, i, matriz[i][j], matriz[j][i], soma);
                    mult5++;
                }
            }
        }
    }
    
    return mult5;
}

void executar_q2() {
    int n;
    
    printf("\nDigite o tamanho da matriz (n x n): ");
    scanf("%d", &n);
    
    int matriz[n][n];
    
    printf("\nDeseja entrada manual (1) ou aleatoria (2)? ");
    int opcao;
    scanf("%d", &opcao);
    
    if(opcao == 1) {
        printf("\nPreenchendo matriz manualmente:\n");
        preencher_matriz_manual(n, n, matriz);
    } else {
        preencher_matriz_aleatorio(n, n, matriz);
        printf("\nMatriz preenchida aleatoriamente!");
    }
    
    int resultado = multiplo5(n, matriz);
    
    printf("\nRESULTADO:\n");
    printf("Total de multiplos de 5: %d\n", resultado);
}

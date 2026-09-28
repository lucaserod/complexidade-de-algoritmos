#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
PROJETO AV01 - COMPLEXIDADE E COMPUTABILIDADE DE ALGORITMO
PROFESSOR: HERRIOTR

MEMBROS DO GRUPO:
1. [Diego Feitosa]
2. [Diego Braga]
3. [José Kleyton]
4. [Lucas Espíndola]
*/

#include "q1.c"
#include "q2.c"
#include "q3.c"
#include "q4.c"
#include "q5.c"

void exibir_menu()
{
    printf("\n========================================\n");
    printf("PROJETO AV01 - ESCOLHA UMA OPCAO\n");
    printf("========================================\n");
    printf("1. Questao 1: Contagem de Ocorrencias\n");
    printf("2. Questao 2: Analise Triangular\n");
    printf("3. Questao 3: Matrizes 3D\n");
    printf("4. Questao 4: Analise Assimetrica\n");
    printf("5. Questao 5: Busca Binaria\n");
    printf("0. Sair\n");
    printf("========================================\n");
    printf("Digite sua escolha: ");
}

void exibir_header()
{
    printf("\n========================================\n");
    printf("COMPLEXIDADE E COMPUTABILIDADE\n");
    printf("PROFESSOR: HERRIOTR\n");
    printf("PROJETO AV01\n");
    printf("\n");
    printf("MEMBROS DO GRUPO:\n");
    printf("1. [Diego Feitosa]\n");
    printf("2. [Diego Braga]\n");
    printf("3. [Jose Kleyton]\n");
    printf("4. [Lucas Espindola]\n");
    printf("========================================\n");
}

int main()
{
    srand(time(NULL));
    int opcao;

    exibir_header();

    do
    {
        exibir_menu();
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\n=== QUESTAO 1 ===\n");
            executar_q1();
            break;
        case 2:
            printf("\n=== QUESTAO 2 ===\n");
            executar_q2();
            break;
        case 3:
            printf("\n=== QUESTAO 3 ===\n");
            executar_q3();
            break;
        case 4:
            printf("\n=== QUESTAO 4 ===\n");
            executar_q4();
            break;
        case 5:
            printf("\n=== QUESTAO 5 ===\n");
            executar_q5();
            break;
        case 0:
            printf("\nEncerrando...\n");
            break;
        default:
            printf("\nOpcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}

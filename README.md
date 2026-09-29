# Projeto AV01 – Complexidade e Computabilidade de Algoritmo

MEMBROS DO GRUPO:

1. [Diego Feitosa]

2. [Diego Braga]

3. [José Kleyton]

4. [Lucas Espíndola]


Trabalho prático desenvolvido para a disciplina de **Complexidade e Computabilidade de Algoritmo** do UNIPÊ sob orientação do **Prof. Herriotr**. O projeto consiste na implementação em linguagem C de cinco algoritmos específicos, avaliação assintótica (notação Big O), contagem passo a passo de instruções e cálculo de tempo estimado de execução considerando $10^8\text{ instruções/segundo}$.

---

## Estrutura do Projeto

O código do projeto foi estruturado de forma modularizada:

* **`main.c`**: Atua como o **menu principal** interativo do programa via terminal. Responsável por inicializar as rotinas, capturar as opções do usuário e redirecionar para a execução da questão solicitada até que a opção de saída (0) seja selecionada.


* **`q1.c` a `q5.c**`: Cada questão solicitada na especificação do projeto foi separada em seu próprio arquivo de código-fonte (`.c`), isolando a lógica de preenchimento, exibição e processamento de cada algoritmo.



---

## Descrição das Questões

* **Questão 1 (`q1.c`) – Contagem de Ocorrências Distintas:** Recebe um vetor principal de tamanho $n$ e um vetor de busca de tamanho $k$. Conta a quantidade de ocorrências de cada um dos $k$ elementos no vetor de tamanho $n$, somando o total geral.


* **Questão 2 (`q2.c`) – Análise de Pares em Matriz Triangular:** Percorre a metade superior e a diagonal principal de uma matriz $n \times n$ ($i \le j$), somando pares simétricos $A[i][j] + A[j][i]$ e contabilizando as somas que são múltiplos de 5.


* **Questão 3 (`q3.c`) – Comparação de Matrizes Tridimensionais:** Percorre dois arranjos 3D ($n \times n \times n$), calcula o somatório total dos elementos de cada um e retorna se a soma da matriz A é maior ou igual à soma da matriz B.


* **Questão 4 (`q4.c`) – Análise de Casos Assimétricos no Condicional:** Percorre um vetor de tamanho $n$; caso o elemento seja par, adiciona seu valor diretamente à soma acumulada; caso seja ímpar, calcula seu fatorial e acumula o resultado.


* **Questão 5 (`q5.c`) – Busca Binária em Vetor Ordenado:** Para cada elemento de um vetor $A$ não ordenado, executa o algoritmo de busca binária sobre um vetor $B$ ordenado (ordenado previamente via Bubble Sort no preenchimento aleatório) e contabiliza o total de correspondências.



---

## Funcionalidades e Requisitos Atendidos

* **Modo de Entrada Dinâmico:** Para cada algoritmo, o usuário pode optar por preencher as estruturas manualmente ou de forma randômica.


* **Exibição dos Dados:** Os vetores e matrizes gerados são impressos na tela antes do resultado final para conferência da operação.


* **Uso de VLAs (Variable Length Arrays):** Dimensões definidas em tempo de execução via parâmetros de funções em padrão C99.



---

## Como Compilar e Executar

Compile o arquivo principal `main.c` utilizando um compilador C compatível com C99:

```bash
gcc -std=c99 main.c -o projeto_av01
./projeto_av01

```

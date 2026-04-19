#include <stdio.h>

int main(){
    // Criação de variaveis
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    // Exibir as informações
    printf("Produto %s\ntem estoque %u\ne o valor unitário é %f\n\n", produtoA, estoqueA, valorA);
    printf("Produto %s\ntem estoque %u\ne o valor unitário é %f\n", produtoB, estoqueB, valorB);

    // Comparações com o minimo de estoque
    int resultadoA, resultadoB;

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("\n\nO produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d", produtoB, resultadoB);

    // Comprarações entre os valores totais dos produtos
    printf("O valor total de A (R$ %f) é maior que o valor total de B (R$%f): %d\n" , (estoqueA*valorA),(estoqueB*valorB), (valorA*estoqueA > valorB*estoqueB));
}
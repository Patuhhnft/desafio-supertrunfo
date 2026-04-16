#include <stdio.h>

int main() {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite seu nome:\n");
    scanf("%s", nome);

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    printf("Digite sua matrícula:\n");
    scanf("%d", &matricula);

    printf("Cadastro feito com sucessagem: \n");
    printf("Nome do aluno: %s\n Matícula %d \n", nome, matricula);
    printf("Idade: %d \n Altura: %.2f", idade, altura);

    return 0;
}
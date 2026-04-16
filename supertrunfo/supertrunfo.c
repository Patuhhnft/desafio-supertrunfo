#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char LetraEstado;
    char codigo[20];
    char cidade[50];
    int numerohabitantes;
    float area;
    float pib;
    int pontosTuristicos;
    char temp[20];

    // Primera carta

    // A letra que representa o estado
    printf("Escolha uma carta de A a H para representar seu estado: ");
    scanf("%c", &LetraEstado);
    while (getchar() != '\n');
    
    // O código do estado
    printf("Digite o código do seu estado de 1 a 8: ");
    scanf("%s", codigo);
    while (getchar() != '\n');

    // O lugar onde faz a junção do estado com o código dele
    sprintf(temp, "%c%s", LetraEstado, codigo);

    // Exibe o código inteiro da carta
    printf("Sua carta é: %s\n", temp);

    // Pega o nome da cidade
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade);
    while (getchar() != '\n');

    // Pega o número de habitantes
    printf("Número de habitantes: ");
    scanf("%d", &numerohabitantes);
    while (getchar() != '\n');

    // Pega a Área
    printf("Área: ");
    scanf("%f", &area);
    while (getchar() != '\n');

    // Pega o PIB
    printf("PIB: ");
    scanf("%f", &pib);
    while (getchar() != '\n');

    // Pega o número de pontos turísticos
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);
    while (getchar() != '\n');
    printf("\n");

    // Exibe a carta inteira
    printf("Sua primeira carta é: \n");
    printf("Estado: %c\n", LetraEstado);
    printf("Código: %s\n", temp);
    printf("Nome da cidade: %s\n", cidade);
    printf("Número de habitantes: %d\n", numerohabitantes);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos);

    // Segunda carta

    // A letra que representa o estado
    printf("\nEscolha uma carta de A a H para representar seu estado: ");
    scanf("%c", &LetraEstado);
    
    // O código do estado
    printf("Digite o código do seu estado de 1 a 8: ");
    scanf("%s", codigo);
    while (getchar() != '\n');

    // O lugar onde faz a junção do estado com o código dele
    sprintf(temp, "%c%s", LetraEstado, codigo);

    // Exibe o código inteiro da carta
    printf("Sua carta é: %s\n", temp);

    // Pega o nome da cidade
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade);
    while (getchar() != '\n');

    // Pega o número de habitantes
    printf("Número de habitantes: ");
    scanf("%d", &numerohabitantes);
    while (getchar() != '\n');

    // Pega a Área
    printf("Área: ");
    scanf("%f", &area);
    while (getchar() != '\n');

    // Pega o PIB
    printf("PIB: ");
    scanf("%f", &pib);
    while (getchar() != '\n');

    // Pega o número de pontos turísticos
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);
    while (getchar() != '\n');
    printf("\n");

    printf("Sua segunda carta é: \n");
    printf("Estado: %c\n", LetraEstado);
    printf("Código: %s\n", temp);
    printf("Nome da cidade: %s\n", cidade);
    printf("Número de habitantes: %d\n", numerohabitantes);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d", pontosTuristicos);

    return 0;
}

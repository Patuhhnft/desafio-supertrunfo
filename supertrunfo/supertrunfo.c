#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char LetraEstadoP, LetraEstadoS;
    char codigoP[20], codigoS[20];
    char cidadeP[50], cidadeS[50];
    int numerohabitantesP, numerohabitantesS;
    float areaP, areaS;
    float pibP, pibS;
    float densidadeP, densidadeS;
    float pibcapP, pibcapS;
    int pontosTuristicosP, pontosTuristicosS;
    char tempP[20], tempS[20];
    double superPoderP, superPoderS;
    int compPopulacao, compArea, compPIB, compPontos, compDensidade, compPIBCapita, compSuperPoder;

    // Primeira carta

    printf("Escolha uma carta de A a H para representar seu estado (Primeira carta): ");
    scanf("%c", &LetraEstadoP);
    while (getchar() != '\n');

    printf("Digite o código do seu estado de 1 a 8: ");
    scanf("%s", codigoP);
    while (getchar() != '\n');

    sprintf(tempP, "%c%s", LetraEstadoP, codigoP);
    printf("Sua carta é: %s\n", tempP);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidadeP);
    while (getchar() != '\n');

    printf("Número de habitantes: ");
    scanf("%d", &numerohabitantesP);
    while (getchar() != '\n');

    printf("Área: ");
    scanf("%f", &areaP);
    while (getchar() != '\n');

    printf("PIB: ");
    scanf("%f", &pibP);
    while (getchar() != '\n');

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosP);
    while (getchar() != '\n');
    printf("\n");

    densidadeP = (float) numerohabitantesP / areaP;
    pibcapP = (float) pibP / numerohabitantesP;

    printf("Sua primeira carta é:\n");
    printf("Estado: %c\n", LetraEstadoP);
    printf("Código: %s\n", tempP);
    printf("Nome da cidade: %s\n", cidadeP);
    printf("Número de habitantes: %d\n", numerohabitantesP);
    printf("Área: %.2f\n", areaP);
    printf("PIB: %.2f\n", pibP);
    printf("Número de pontos turísticos: %d\n", pontosTuristicosP);
    printf("Densidade populacional: %.2f hab/km²\n", densidadeP);
    printf("PIB per capita: %.2f\n", pibcapP);

    // Segunda carta

    printf("\nEscolha uma carta de A a H para representar seu estado (Segunda carta): ");
    scanf("%c", &LetraEstadoS);
    while (getchar() != '\n');

    printf("Digite o código do seu estado de 1 a 8: ");
    scanf("%s", codigoS);
    while (getchar() != '\n');

    sprintf(tempS, "%c%s", LetraEstadoS, codigoS);
    printf("Sua carta é: %s\n", tempS);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidadeS);
    while (getchar() != '\n');

    printf("Número de habitantes: ");
    scanf("%d", &numerohabitantesS);
    while (getchar() != '\n');

    printf("Área: ");
    scanf("%f", &areaS);
    while (getchar() != '\n');

    printf("PIB: ");
    scanf("%f", &pibS);
    while (getchar() != '\n');

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosS);
    while (getchar() != '\n');
    printf("\n");

    densidadeS = (float) numerohabitantesS / areaS;
    pibcapS = (float) pibS / numerohabitantesS;

    printf("Sua segunda carta é:\n");
    printf("Estado: %c\n", LetraEstadoS);
    printf("Código: %s\n", tempS);
    printf("Nome da cidade: %s\n", cidadeS);
    printf("Número de habitantes: %d\n", numerohabitantesS);
    printf("Área: %.2f\n", areaS);
    printf("PIB: %.2f\n", pibS);
    printf("Número de pontos turísticos: %d\n", pontosTuristicosS);
    printf("Densidade populacional: %.2f hab/km2\n", densidadeS);
    printf("PIB per capita: %.2f\n", pibcapS);

    superPoderP = (double) numerohabitantesP + areaP + pibP + pontosTuristicosP + pibcapP + (densidadeP > 0.0f ? (1.0 / densidadeP) : 0.0);
    superPoderS = (double) numerohabitantesS + areaS + pibS + pontosTuristicosS + pibcapS + (densidadeS > 0.0f ? (1.0 / densidadeS) : 0.0);

    compPopulacao   = numerohabitantesP > numerohabitantesS;
    compArea        = areaP > areaS;
    compPIB         = pibP > pibS;
    compPontos      = pontosTuristicosP > pontosTuristicosS;
    compDensidade   = densidadeP < densidadeS; /* menor densidade vence */
    compPIBCapita   = pibcapP > pibcapS;
    compSuperPoder  = superPoderP > superPoderS;

    printf("\nComparação de Cartas:\n\n");

    printf("População: %d (%s)\n", compPopulacao,  compPopulacao  ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Área: %d (%s)\n", compArea,            compArea        ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB: %d (%s)\n", compPIB,              compPIB         ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Pontos Turísticos: %d (%s)\n", compPontos, compPontos  ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Densidade Populacional: %d (%s)\n", compDensidade, compDensidade ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB per Capita: %d (%s)\n", compPIBCapita, compPIBCapita ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Super Poder: %d (%s)\n", compSuperPoder, compSuperPoder ? "Carta 1 venceu" : "Carta 2 venceu");

    return 0;
}

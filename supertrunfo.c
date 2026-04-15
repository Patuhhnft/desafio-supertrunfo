/*
 * Super Trunfo - Jogo de Cartas de Países
 * Projeto acadêmico em linguagem C
 *
 * O jogador cadastra cartas representando países com seus atributos,
 * e pode comparar cartas para ver qual país é superior em cada atributo.
 */

#include <stdio.h>
#include <string.h>

#define MAX_CARTAS 8
#define NOME_MAX   50

typedef struct {
    char estado[3];           /* Código do estado (ex: "A1") */
    char codigo[5];           /* Código da carta  (ex: "A01") */
    char nome[NOME_MAX];      /* Nome do país */
    long int populacao;       /* População */
    float area;               /* Área em km² */
    float pib;                /* PIB em bilhões de USD */
    int pontos_turisticos;    /* Número de pontos turísticos */
    float densidade;          /* Densidade demográfica (hab/km²) calculada */
} Carta;

/* Calcula a densidade demográfica de uma carta */
void calcular_densidade(Carta *carta) {
    if (carta->area > 0)
        carta->densidade = (float)carta->populacao / carta->area;
    else
        carta->densidade = 0;
}

/* Lê os dados de uma carta do usuário */
void ler_carta(Carta *carta, int numero) {
    printf("\n--- Carta %d ---\n", numero);

    printf("Estado (ex: A1): ");
    scanf("%2s", carta->estado);

    printf("Código da carta (ex: A01): ");
    scanf("%4s", carta->codigo);

    printf("Nome do país: ");
    scanf(" %49[^\n]", carta->nome);

    printf("População: ");
    scanf("%ld", &carta->populacao);

    printf("Área (km²): ");
    scanf("%f", &carta->area);

    printf("PIB (bilhões USD): ");
    scanf("%f", &carta->pib);

    printf("Pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);

    calcular_densidade(carta);
}

/* Exibe os dados de uma carta */
void exibir_carta(const Carta *carta) {
    printf("\n  Estado: %s | Código: %s\n", carta->estado, carta->codigo);
    printf("  País: %s\n", carta->nome);
    printf("  População: %ld habitantes\n", carta->populacao);
    printf("  Área: %.2f km²\n", carta->area);
    printf("  PIB: %.2f bilhões USD\n", carta->pib);
    printf("  Pontos Turísticos: %d\n", carta->pontos_turisticos);
    printf("  Densidade Demográfica: %.2f hab/km²\n", carta->densidade);
}

/* Compara duas cartas em um atributo escolhido */
void comparar_cartas(const Carta *c1, const Carta *c2) {
    int opcao;

    printf("\n=== Comparação de Cartas ===\n");
    printf("Carta 1: %s (%s)\n", c1->nome, c1->codigo);
    printf("Carta 2: %s (%s)\n", c2->nome, c2->codigo);

    printf("\nEscolha o atributo para comparar:\n");
    printf("  1 - População\n");
    printf("  2 - Área\n");
    printf("  3 - PIB\n");
    printf("  4 - Pontos Turísticos\n");
    printf("  5 - Densidade Demográfica (menor vence)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    double val1 = 0, val2 = 0;
    const char *atributo = "";

    switch (opcao) {
        case 1:
            val1 = (double)c1->populacao;
            val2 = (double)c2->populacao;
            atributo = "População";
            break;
        case 2:
            val1 = c1->area;
            val2 = c2->area;
            atributo = "Área";
            break;
        case 3:
            val1 = c1->pib;
            val2 = c2->pib;
            atributo = "PIB";
            break;
        case 4:
            val1 = c1->pontos_turisticos;
            val2 = c2->pontos_turisticos;
            atributo = "Pontos Turísticos";
            break;
        case 5:
            val1 = c1->densidade;
            val2 = c2->densidade;
            atributo = "Densidade Demográfica";
            /* Para densidade, menor valor vence */
            printf("\nAtributo: %s\n", atributo);
            printf("  %s: %.2f hab/km²\n", c1->nome, c1->densidade);
            printf("  %s: %.2f hab/km²\n", c2->nome, c2->densidade);
            if (val1 < val2)
                printf("Vencedor: %s (menor densidade)!\n", c1->nome);
            else if (val2 < val1)
                printf("Vencedor: %s (menor densidade)!\n", c2->nome);
            else
                printf("Empate!\n");
            return;
        default:
            printf("Opção inválida.\n");
            return;
    }

    printf("\nAtributo: %s\n", atributo);
    printf("  %s: %.2f\n", c1->nome, val1);
    printf("  %s: %.2f\n", c2->nome, val2);

    if (val1 > val2)
        printf("Vencedor: %s!\n", c1->nome);
    else if (val2 > val1)
        printf("Vencedor: %s!\n", c2->nome);
    else
        printf("Empate!\n");
}

int main(void) {
    Carta cartas[MAX_CARTAS];
    int total = 0;
    int opcao;

    printf("=============================\n");
    printf("  Super Trunfo - Países\n");
    printf("=============================\n");

    do {
        printf("\nMenu Principal:\n");
        printf("  1 - Cadastrar carta\n");
        printf("  2 - Exibir todas as cartas\n");
        printf("  3 - Comparar duas cartas\n");
        printf("  0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (total < MAX_CARTAS) {
                    ler_carta(&cartas[total], total + 1);
                    total++;
                    printf("Carta cadastrada com sucesso!\n");
                } else {
                    printf("Limite de %d cartas atingido.\n", MAX_CARTAS);
                }
                break;

            case 2:
                if (total == 0) {
                    printf("Nenhuma carta cadastrada ainda.\n");
                } else {
                    printf("\n=== Cartas Cadastradas ===\n");
                    for (int i = 0; i < total; i++)
                        exibir_carta(&cartas[i]);
                }
                break;

            case 3:
                if (total < 2) {
                    printf("Cadastre pelo menos 2 cartas para comparar.\n");
                } else {
                    int idx1, idx2;
                    printf("Número da primeira carta (1 a %d): ", total);
                    scanf("%d", &idx1);
                    printf("Número da segunda carta (1 a %d): ", total);
                    scanf("%d", &idx2);

                    if (idx1 < 1 || idx1 > total || idx2 < 1 || idx2 > total)
                        printf("Índices inválidos.\n");
                    else
                        comparar_cartas(&cartas[idx1 - 1], &cartas[idx2 - 1]);
                }
                break;

            case 0:
                printf("Até mais!\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

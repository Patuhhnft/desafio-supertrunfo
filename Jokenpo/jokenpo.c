#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int escolhaJogador, escolhaPc;
    int selecao;

    do
    {
        printf("Por favor selecione oque você deseja fazer!\n");
        printf("1. Iniciar jogo\n2. Regras\n0. Sair\n");
        scanf("%d", &selecao);
        switch (selecao)
        {
        case 1:
        {
            int ataque;
            int maquina;
            printf("Escolha sua opção de ataque!\n1. Pedra\n2. Papel\n3. Tesoura\n");
            scanf("%d", &ataque);
            printf("Você escolheu %d\n", ataque);
            srand(time(0));
            maquina = rand() % 3;
            maquina++;
            printf("A máquina escolheu %d\n", maquina);
            if ((ataque == maquina))
            {
                printf("Empate\n\n");
            }
            else
            {
                if ((ataque < 0) || (ataque > 3))
                {
                    printf("Número inválido!");
                    selecao = 0;
                    break;
                }
                else
                {
                    if ((ataque == 1) && (maquina == 2))
                    {
                        printf("Maquina ganhou!\n");
                    }
                    else
                    {
                        if ((ataque == 2) && (maquina == 3))
                        {
                            printf("Maquina ganhou!\n");
                        }
                        else
                        {
                            if ((ataque == 3) && (maquina == 1))
                            {
                                printf("maquina ganhou!\n");
                            }
                            else
                            {
                                printf("Você ganhou!\n\n");
                            };
                        };
                    };
                };
            };
        }break;
        case 2:
        {
            printf("\nTemos 3 opções iniciais, Pedra, Papel e Tesoura\nApós você escolher, o jogo dará continuidade, o PC irá escolher\ncom ele escolhendo vocês irão ver quem ganhou.\n\nO padrão de poder é esse:\nPedra>Tesoura\nTesoura>Papel\nPapel>Pedra\n\n");
        }break;
        case 0:
        {
         break;
        }
        default:
            printf("número inválido!\n");
            break;
        }
    } while (selecao != 0);
};
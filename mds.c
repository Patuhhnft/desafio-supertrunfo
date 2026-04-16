#include <stdio.h>

int main() {
    int mat;
    int port;
    int ing;
    float resultado;

    printf("Digite sua nota em matemática!\n");
    scanf("%d", &mat);
    printf("Digite sua nota em português!\n");
    scanf("%d", &port);
    printf("Digite sua nota em inglês!\n");
    scanf("%d", &ing);

    resultado = (mat + port + ing) / 3;
    
    printf("Resultado: %.2f\n", resultado);
    
    return 0;
}
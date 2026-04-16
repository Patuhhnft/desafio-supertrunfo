#include <stdio.h>

int main()
{
    int nota1;
    int nota2;
    printf("digite a primeira nota: \n");
    scanf("%d", &nota1);
    printf("digite a segunda nota: \n");
    scanf("%d", &nota2);
    
    float resultado = (float) (nota1+nota2)/2;
    printf("Sua nota é: %.2f",resultado);
    return 0;
}

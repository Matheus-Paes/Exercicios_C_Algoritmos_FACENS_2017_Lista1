#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3;

        printf("Insira o primeiro numero: ");
            scanf("%f", &n1);

        printf("Insira o segundo numero: ");
            scanf("%f", &n2);

        printf("Insira o terceiro numero: ");
            scanf("%f", &n3);

    if(n1 > n2 && n1 > n3){
        printf("Maior = %.2f", n1);
    }
    if(n2 > n1 && n2 > n3){
        printf("Maior = %.2f", n2);
    }
    if(n3 > n1 && n3 > n2){
        printf("Maior = %.2f", n3);
    }
    return 0;
}

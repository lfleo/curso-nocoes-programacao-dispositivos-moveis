/*
01. Desenvolver um algorítimo que leia um número inteiro e verifique se o número é divisível por 5 e por 3 ao mesmo tempo.
*/

#include <stdio.h>
main()

{
    int n1;

    printf("Digite um número e veremos se ele é divisível por 3 e 5 ao mesmo tempo: ");
    scanf("%d", &n1);

    if (((n1%5)==0) && ((n1%3)==0)) {
        printf("Seu número é divisível.\n");
    } else {
        printf("Seu número não é divisível.\n");
    }
}
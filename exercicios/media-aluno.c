#include <stdio.h>
main()

{
    int n1; /* int = número inteiro */
    int n2;

    printf("Digite sua primeira nota: ");
    scanf("%d", &n1);

    printf("Digite sua segunda nota: ");
    scanf("%d", &n2);

    if (((n1+n2)/2)>=7) { /* Formula de média sobre as duas notas forem maior que sete, aprovado. */
        printf("Você está APROVADO!");
    }
    else {
        printf("Você está REPROVADO!");
    }    
}

/*  Pseudo-Linguagem

algoritimo MediaAluno

var n1: real
var n2: real

inicio
escreva ("Digite sua primeira nota: ")
leia (n1)
escreva ("Digite sua segunda nota: ")
leia (n2)

se ((n1+n2)/2)>=7 entao escreva ("Você está a APROVADO!")
senao escreva ("Você está REPROVADO!")

fimse
fimalgoritimo

*/
#include<stdio.h>
#include<stdlib.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    if(numero >= 10 && numero <= 20) {
        printf("Esse numero esta dentro do intervalo de 10 a 20. \n");
    } else {
        printf("Esse numero esta fora do intervalo de 10 a 20. \n");
    }

    return 0;
}

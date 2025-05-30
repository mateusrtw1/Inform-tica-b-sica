#include<stdio.h>
#include<stdlib.h>

int main(){

    int numero, fatorial = 1;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%i", &numero);

    if(numero < 0){
        printf("Numero invalido! Digite um numero inteiro que nao seja negativo.\n");
    } else {
        for(int i = 1; i <= numero; i = i + 1){
            fatorial *= i;
        }
        printf("O fatorial de %i eh %i\n", numero, fatorial);
    }

    return 0;
}

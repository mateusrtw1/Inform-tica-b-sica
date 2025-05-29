#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero, i = 1;
    int fatorial = 1;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%i", &numero);

    if(numero < 0){
        printf("Numero invalido! Digite um numero inteiro que nao seja negativo.\n");
    } else {
        while(i <= numero){
            fatorial *= i;
            i = i + 1;
        }
        printf("O fatorial de %i eh %i\n", numero, fatorial);
    }

    return 0;
}

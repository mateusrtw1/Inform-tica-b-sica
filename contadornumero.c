#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    int contador = 0;

    while(numero > 0){
        if(numero % 2 != 0){
            contador = contador + 1;
        }
        numero = numero - 1;
    }

    printf("Quantidade de numeros impares: %i\n", contador);

    return 0;
}

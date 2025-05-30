#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero, i;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    printf("Numeros primos de 0 ate %i:\n", numero);

    if(numero >= 2){
        printf("2 ");
    }

    for(i = 3; i < numero; i++){
        for(int j = 2; j < i; j++)
            if(i % j == 0) break;
            else if(j == i - 1) printf("%i ", i);
    }

    printf("\n");

    return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    int num1 = 0, num2 = 1;
    int prox;

    printf("Digite um numero: ");
    scanf("%i", &num);

    printf("Sequencia de Fibonacci:\n");

    for(int i = 1; i <= num && num1 < num; i++){
        printf("%i ", num1);
        prox = num1 + num2;
        num1 = num2;
        num2 = prox;
    }

    printf("\n");

    return 0;
}

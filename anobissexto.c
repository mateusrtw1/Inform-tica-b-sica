#include<stdio.h>
#include<stdlib.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%i", &ano);

    if (ano % 4 == 0){
        printf("Esse ano e bissexto \n");
    } else {
        printf("Esse ano nao e bissexto \n");
    }

    return 0;
}

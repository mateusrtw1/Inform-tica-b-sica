#include<stdio.h>
#include<stdlib.h>

int main() {
    int preco, final;

    printf("Digite o preco do produto: R$");
    scanf("%i", &preco);

    if(preco > 100) {
        final = preco * 90 / 100;
        printf("Preco com desconto: R$%i\n", final);
    } else {
        printf("Preco sem desconto: R$i\n");
    }

    return 0;
}

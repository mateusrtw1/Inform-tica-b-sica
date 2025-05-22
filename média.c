#include<stdio.h>
#include<stdlib.h>

int main() {
    int nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%i", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%i", &nota2);

    media = (nota1 + nota2) / 2;

    if(media >= 6) {
        printf("Aprovado \n");
    } else {
        printf("Reprovado \n");
    }

    return 0;
}

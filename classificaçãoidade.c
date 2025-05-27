#include<stdio.h>
#include<stdlib.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%i", &idade);

    if(idade >= 0 && idade <= 12) {
        printf("Crianca\n");
    } else if (idade >= 13 && idade <= 17){
        printf("Adolescente\n");
    } else if (idade >= 18 && idade <= 59){
        printf("Adulto\n");
    } else if (idade >= 60){
        printf("Idoso\n");
    } else {
        printf("Idade invalida\n");
    }

    return 0;
}

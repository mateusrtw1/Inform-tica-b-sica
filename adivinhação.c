#include<stdio.h>
#include<stdlib.h>

int main(){

    int numUsuario;
    int contador = 0;

    while(numUsuario != 82){
            printf("\nDigite um numero de 0 a 100.\n");
            scanf("%i", &numUsuario);

        if(numUsuario > 82){
            printf("O numero eh menor que esse.\n");
        } else if(numUsuario < 82){
            printf("O numero eh maior que esse.\n");
        }
        contador++;
    }
    printf("\nParabens, voce acertou, o numero era 10!\n");
    printf("Voce tentou %i vez(es).\n", contador);
}

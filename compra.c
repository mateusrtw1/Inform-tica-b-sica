#include<stdio.h>
#include<stdlib.h>

int main(){
    float preco, valor, troco;
    int x;

    printf("Digite o valor da compra: ");
    scanf("%f", &preco);

    printf("Digite o valor que foi pago: ");
    scanf("%f", &valor);

    troco = valor - preco;
    printf("Troco: %.2f\n", troco);

    if(troco >= 100){
        x = troco / 100;
        troco = troco - (x * 100);
        printf("%ix 100.00\n", x);
    } if(troco >= 50){
        x = troco / 50;
        troco = troco - (x * 50);
        printf("%ix 50.00\n", x);
    } if(troco >= 20){
        x = troco / 20;
        troco = troco - (x * 20);
        printf("%ix 20.00\n", x);
    } if(troco >= 10){
        x = troco / 10;
        troco = troco - (x * 10);
        printf("%ix 10.00\n", x);
    } if(troco >= 5){
        x = troco / 5;
        troco = troco - (x * 5);
        printf("%ix 5.00\n", x);
    } if(troco >= 1){
        x = troco / 1;
        troco = troco - (x * 1);
        printf("%ix 1.00\n", x);
    } if(troco >= 0.5){
        x = troco / 0.5;
        troco = troco - (x * 0.5);
        printf("%ix 0.50\n", x);
    }

    return 0;
}

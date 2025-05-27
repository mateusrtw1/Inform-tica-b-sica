#include<stdio.h>
#include<stdlib.h>

int main() {
        float peso, altura, imc;

        printf("Digite o peso (kg): ");
        scanf("%f", &peso);

        printf("Digite a altura (m): ");
        scanf("%f", &altura);

        imc = peso / (altura * altura);

        printf("IMC: %.2f\n", imc);

        if (imc < 18.5) {
            printf("Abaixo do peso\n");
        } else if (imc >= 18.5 && imc <= 24.9){
            printf("Peso normal\n");
        } else if (imc >= 25 && imc <= 29.9) {
            printf("Sobrepeso\n");
        } else if (imc >= 30) {
            printf("Obesidade");
        } else {
            printf("Valor de IMC invalido\n");
        }

        return 0;
}

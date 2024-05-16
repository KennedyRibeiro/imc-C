#include <stdio.h>

int main (){
    float peso, altura, imc;

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("você está abaixo do peso. \n");
    } else if (imc >= 18.5 && imc < 24.9){
        printf("Você está com o peso normal. \n");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Você está com sobrepeso. \n");
    } else {
        printf("Você está com obesidade. \n");
    }

    return 0;
}
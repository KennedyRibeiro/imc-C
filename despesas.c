#include <stdio.h>

int main (){
    float salario, despesa, resultado;

    printf("Entre com o valor do salário: ");
    scanf("%f", &salario);

    printf("Entrei com o valor da sua despesa: ");
    scanf("%f", &despesa);

    resultado = salario - despesa;

    printf("O valor é de: %.2f\n", resultado);

}


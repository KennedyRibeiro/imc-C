#include <stdio.h>

int main () {
    float velocidade, distancia, tempo;

    printf("Digite a sua velocidade em metros: ");
    scanf("%f", & velocidade);

    printf("Digite a distância em Km: ");
    scanf("%f", & distancia);

    tempo = distancia / velocidade;

    printf("Você chegará no local em: %f", tempo);
}
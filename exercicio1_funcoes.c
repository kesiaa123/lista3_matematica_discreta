#include <stdio.h>
#include <math.h>
/*1. A água é essencial para a vida e está presente na constituição de todos os alimentos. Em regiões com
escassez de água, é comum a utilização de cisternas para a captação e armazenamento da água da chuva.
Ao esvaziar um tanque contendo água da chuva, a expressão 
V(t)= ((1/43200)^t^2)+3 
representa o volume (em m3) de água presente no tanque no instante t (em minutos). Qual é o tempo, em
horas, necessário para que o tanque seja esvaziado?*/

int main() {
    double num = 43200;
    double volum = 0;
    int tempo, horas;
/*calculo de quanto tempo demora para esaziar uma caixa da'agua de acordo com volume*/

    tempo = (double)sqrt(num * (volum + 3));
    horas = tempo/60;

    printf("o tempo necessario para esvaziar o tanque é:\n");
    printf("em minutos = %i\n", tempo);
    printf("em horas = %i", horas);

    return 0;
}

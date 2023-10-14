#include <stdio.h>
#include <math.h>
/*Um suíno, na fase de creche, ganha 30 gramas por dia.Qual é o
ganho de massa por unidade de tempo, em miligramas por segundo?*/
int main(){

    float ganho_massa, ganho_massa_s;

    printf("Para calcular o ganho de massa por unidade de\ntempo em miligramas por segundo, precisamos converter as unidades:\n1 grama = 1000 miligramas\n1 dia = 24 horas = 24 * 60 * 60 segundos (pois há 24 horas o dia, 60 minutos em uma hora e 60 segundos em um minuto)\n");

    ganho_massa = 30 * 1000;
    ganho_massa_s = ganho_massa / (24 * 60 * 60);

    printf("\ncalculando o ganho de massa por unidade de tempo em miligramas por segundo\n30 gramas x 1000 miligramas / (24 horas x 60 minutos x 60 segundos)\n= %.4f mg/s", ganho_massa_s);

}

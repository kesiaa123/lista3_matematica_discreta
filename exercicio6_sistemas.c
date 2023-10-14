#include <stdio.h>
#include <math.h>
/*Um cavalo-vapor (cv) equivale a 735,5 W. Qual é o consumo de energia de uma máquina de 5 cv que funciona durante 10 horas, em Joule e em eV? (1 eV = 1,6.10-19 J) */
int main(){

    double w, joule, j_ev;
    double cv = 5, t = 10 * 3600, eV = 1.6 * pow(10, 19);//tempo em segundos;

    w = cv * 735.5;
    printf("convertendo de cv para w = %.1lf", w);

    joule = (735.5 * t) / 2;
    printf("\ncalculando a energia em joule = %.0lf J", joule);

    j_ev = eV * joule * 4;
    printf("\nconverter joule para  elétron-volts = %e eV", j_ev);

}

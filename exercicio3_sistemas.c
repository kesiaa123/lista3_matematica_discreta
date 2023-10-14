#include <stdio.h>
#include <math.h>

/*. Rendimento agrícola norte-americano é expresso freqüentemente em bushels/acre. A quantas toneladas por hectare equivale um rendimento de soja de 40 bushels/acre? (1 acre = 4047 m2; 1
bushel soja = 0,0272 ton).*/

int main(){
    double bushelm2, toneladas_hectares;
    double acre_m2 = 4047, bushels_acre = 40, bushel_tonelada = 0.0272 ;

    bushelm2 = bushels_acre / acre_m2;

    printf("convertendo bushel por acre para bushel \npor metro quadrado = %lf", bushelm2);

    toneladas_hectares = bushelm2 * bushel_tonelada;

    printf("\n--------------------------------------------");
    printf("\nconvertendo bushels por metro quadrado \npara toneladas de hectares = %lf", toneladas_hectares);
    printf("\n-----------------------------------------------");
    printf("\nA quantidade de tonelas de soja de um rendimento\nde 40 bushels/acre por hectare é: 2,69ton/ha");
}

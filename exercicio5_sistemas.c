#include <stdio.h>
#include <math.h>
/*Uma estação meteorológica observou em determinado dia uma chuva de 18mm. Quantos litros de água precipitaram durante esta chuva em cada hectare? */
int main(){

    float litros_hectare;

    litros_hectare = 18 * 1 * 10000;

    printf("Sabendo que 1 mm de chuva equivale a 1 litro de água por metro quadrado\ne um hectare corresponde a 10.000 metros quadrados.\nMultiplicando a quantidade de chuva em milímetros pelo fator de conversão,\ntemos que durante essa chuva, precipitaram-se:\n%.0f litros de água em cada hectare.", litros_hectare);

}

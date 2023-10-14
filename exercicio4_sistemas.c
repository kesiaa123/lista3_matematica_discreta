#include <stdio.h>
#include <math.h>

/*A densidade da água é igual a 1 g/cm-3. Qual é a densidade da água expressa na unidade:*/

int main(){
    int alternativas;
    double densidadeA, densidadeB, densidadeC;

    printf("A densidade da água é igual a 1 g/cm-3.\nQual é a densidade da água expressa na unidade:\na) kg/L\nb)kg m-3\nc)libras por pé cúbico (1 lb = 0,454 kg; 1 pé = 30,48 cm)\n");
    printf("-------------------------------------------------------\n");
  do{
    printf("\ndigite 1 para responder a alternativa A\ndigite 2 para responder a alternativa B ou\ndigite 3 para responder a alternativa C\n");
    scanf("%i", &alternativas);
    printf("-------------------------------------------------------\n");

    switch(alternativas){
    case 1:
    densidadeA = 1 * 0.001;

    printf("\nSabendo que 1 g/cm³ = 0,001 kg/L Então,\na densidade da água em kg/L é igual a: %.3lfkg/l\n", densidadeA);

    break;

    case 2:

    densidadeB = 1 * 1000;

    printf("\nlevando em consideração que 1 m = 100 cm e 1 m³ = 1000 L\n Portanto a densidade da agua em kg/m³ e igua a: %.0lfkg/m³\n", densidadeB);
    break;

    case 3:
    densidadeC = 1000 * 0.06235;

    printf("\nSabendo que 1 lb = 0,454 kg, 1 pé = 30,48 cm e 1 kg/m³ = 0,06235 lb/ft³\n convertendo de kg/m³ para lb/ft³ e igual a : %.2lf lb/ft³\n", densidadeC);
    break;
    }
   }while (alternativas <= 3);
 }

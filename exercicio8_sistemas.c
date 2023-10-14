#include <stdio.h>
#include <math.h>
/*A quantidade média de radiação solar que chega na superfície da Terra está em torno de 1 cal cm-2 min-1. Expressar essa quantidade em unidades do Sistema Internacional, sabendo que 1 caloria equivale a 4,18 J*/
int main(){
   double si;
   double cal = 1;  // Quantidade em cal/cm^2/min
   double joule = 4.18;   //1 caloria = 4.18 joules
   double segundos = 60;  //Conversão de minutos para segundos
   double m2 = 0.0001;  //Conversão de cm^2 para m^2

   si = (cal * joule) / (segundos * m2); // 1 * 4.18 / 60 * 0.0001
  //sistema internacional (SI)

  printf("Quantidade em SI = %.1lf J m-2 s-1", si);

}

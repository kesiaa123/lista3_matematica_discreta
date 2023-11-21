#include <stdio.h>
#include <math.h>

int main(){
	//variaveis da PA:
	int an, s, a1 = 1, n = 35, r = 2;
	//variaveis da PG:
	int g1 = 2, q = 3, g = 22;
	double ag, sg;
	
	//a35
	printf("---------------------PA---------------------\n\n");
	printf("Em uma PA:{1,3,5,7,9,11,13,15...}\nCom razao = 2, Descubre o a35 e o s35: \n");
	
	an = a1 +(n - 1) * r;
	
	printf("\na35 = %d\n", an);
	
	//s35
	s = n * (a1 + an) / 2;
	
	printf("s35 = %d\n", s);


	//PG:
	printf("---------------------PG---------------------\n\n");
	printf("Em uma PG:{2, 6, 18, 54...}\nCom razao q = 3, Descubre o a22 e o s22: \n");
	
	ag = g1 * pow(q, g - 1);
	
	printf("\na22 = %.2lf\n", ag);
	
	sg = (g1 * (pow(q, g) - 1)) / (q - 1);
	
	printf("s22 = %.2lf", sg);
}

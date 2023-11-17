#include <stdio.h>
#include <math.h>

int main(){
	//variaveis da PA:
	int an, s, a1 = 1, n = 35, r = 2;
	int num, PA, a, sn;
	//variaveis da PG:
	int g1 = 2, q = 3, g = 22;
	int num2, PG;
	double ag, sg, gc, gs;
	
	//a35
	printf("---------------------PA---------------------\n\n");
	printf("Em uma PA:{1,3,5,7,9,11,13,15...}\nCom razao = 2, Descubre o a35 e o s35: \n");
	
	an = a1 +(n - 1) * r;
	
	printf("\na35 = %d\n", an);
	
	//s35
	
	s = n * (a1 + an) / 2;
	
	printf("s35 = %d\n", s);
	
	//outros calculos PA:
	printf("\nDeseja descobrir outro valor dessa PA?\n");
	printf("se sim digite 1, ou 2 para sair: \n");
	scanf("%d", &PA);
	
	switch(PA){
		case 1:
			printf("digite o numero para descobrir: ");
			scanf("%d", &num);
			a = a1 + (num - 1) * r;
			printf("a%d = %d \n", num, a);
			
			sn = num * (a1 + a) / 2;
			printf("s%d = %d \n", num, sn);
			break;
		
		case 2:
			printf("Obrigado!\n");
			break;
	}
	//PG:
	printf("---------------------PG---------------------\n\n");
	printf("Em uma PG:{2, 6, 18, 54...}\nCom razao q = 3, Descubre o a22 e o s22: \n");
	
	ag = g1 * pow(q, g - 1);
	
	printf("\na22 = %.2lf\n", ag);
	
	sg = (g1 * (pow(q, g) - 1)) / (q - 1);
	
	printf("s22 = %.2lf\n", sg);
	
	//Outros calculos PG:
	printf("\nDeseja descobrir outro valor dessa PG?\n");
	printf("se sim digite 1, ou 2 para sair: \n");
	scanf("%d", &PG);
	
	switch(PG){
		case 1:
		  printf("digite o numero para descobrir: ");
			scanf("%d", &num2);
			gc = g1 * pow(q, num2 - 1);
			printf("a%d = %.2lf \n", num2, gc);
			
			gs = (g1 * (pow(q, num2) - 1)) / (q - 1);
			printf("s%d = %.2lf \n", num2, gs);
			break;
			
    	case 2:
			printf("Obrigado!\n");
			break;			
	}
	
}

#include <stdio.h>
#include <locale.h>
/*Considere que a sequência (70, 60, 50, 40, 30, 20, 10...) 
seja uma P.A. finita. (a) Determine o vigésimo termo dessa 
PA e (b) a soma desses 20 primeiros termos. Resolva as letras 
(a) e (b) utilizando alguma linguagem de programação (python, C, etc.).
Faça o upload da suas resposta em PDF !!!!*/

int main(){
	setlocale(LC_ALL, "portuguese");
	
	//variaveis já atribuídas com seus valores:
	int a1 = 70, a2 = 60, n = 20;
	float r, an,  s;
	
	//pergunta:
	printf("\nSequência (70, 60, 50, 40, 30, 20, 10...) \n");
	printf("(a) Determine o vigésimo termo dessa PA\n");
	printf("(b) a soma desses 20 primeiros termos\n\n");
	printf("==============================\n");
	printf("fórmula: an = a1 + (n-1) * r\n");
	printf("==============================\n");
	
	//fórmula da razão:
	r = a2 - a1;
	//resultado da razão:
	printf("a razão = %.2f\n", r);
	
	//fórmula pra descobrir o a20 desta PA:
	an = a1 + (n - 1) * (r);
	//resultado do a20:
	printf("(a) a%d = %.2f\n", n, an);
	
	//fórmula da soma dos 20 primeiros termos desta PA:
	s = (n * (a1 + an)) / 2;
	//resultado do s20:
	printf("(b) s%d = %.2f\n", n, s);
}

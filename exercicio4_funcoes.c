#include <stdio.h>
#include <math.h>
/*4. O sindicato de trabalhadores de uma empresa sugere que o piso salarial da classe seja de R$ 1 800,00,
propondo um aumento percentual fixo por cada ano dedicado ao trabalho. A expressão que corresponde à
proposta salarial (s), em função do tempo de serviço (t), em anos, é s(t) = 1 800 . (1,03)^t De acordo com a
proposta do sindicato, o salário de um profissional dessa empresa com 2 anos de tempo de serviço será, em
reais?*/

int main() {
    float s2;

    printf("o salário de um profissional dessa empresa com 2 anos de tempo de serviço substituindo na fórmula, temos:\n");

    s2 = 1800* pow(1.03, 2);

    printf("S(2) = 1.800 . (1,03)² = %.2f reais", s2);

    return 0;
}

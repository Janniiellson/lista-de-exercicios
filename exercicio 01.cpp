#include <stdio.h>0
#include <locale>
/*1. Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença 
do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
Apresente o resultado da seguinte forma:
DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
DIFERENCA = (“valor de DIFERENCA”) */
int main()
{
	setlocale(LC_ALL, "portuguese");
	
	
	float A,B,C,D, dif;
	
	printf("Leia quatro valores inteiros A, B, C e D. A seguir,calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D). \n");
	
		printf("defina o valor de A: ");
		scanf("%f.2", &A);
		
		printf("defina o valor de B: ");
		scanf("%f", &B);
		
		printf("defina o valor de C: ");
		scanf("%f", &C);
		
		printf("defina o valor de D: ");
		scanf("%f", &D);
	
	dif= A*B - C*D;
	
	printf("A diferença do Valor de AxB-CxD é o equivalente a: %.2f", dif);
	
}

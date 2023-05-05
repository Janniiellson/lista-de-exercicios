#include <stdio.h>
#include <locale>
#include <math.h>

/*3. Faça um programa que calcule e mostre a área da superfície e o volume de uma esfera
sendo fornecido o valor de seu raio (R). 

A fórmula para calcular o volume é: (4/3) * pi * R³. A
fórmula para calcular a área é: 4 * pi * R². Considere (atribua) para pi o valor 3.14159. Use o
conceito de constante 

Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas
linguagens (dentre elas o C++), assumem que o resultado da divisão entre dois inteiros é
outro inteiro */

int main ()
{
	setlocale(LC_ALL, "portuguese");
	float Raio,Area,Volume,PI;
	
	printf("calcule e mostre a área da superfície e o volume de uma esfera sendo fornecido o valor de seu raio (R). \n");
	
	printf("defina o Raio: ");
	scanf("%f", &Raio);
	
	PI=3.14159;
	
	printf("\nValor de PI: %f \n", PI);
	
	Area= 4 * PI * pow(Raio,2);
	
	printf("o valor da Área é: %f \n", Area);
	
	Volume= (4/3.0) * PI * pow(Raio,3);
	
	printf("o valor do Volume é: %f \n", Volume);
	
	
	return 0;
}

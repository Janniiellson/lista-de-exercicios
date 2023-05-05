#include <stdio.h>
#include <locale>
#include <math.h>

/*3. Fa�a um programa que calcule e mostre a �rea da superf�cie e o volume de uma esfera
sendo fornecido o valor de seu raio (R). 

A f�rmula para calcular o volume �: (4/3) * pi * R�. A
f�rmula para calcular a �rea �: 4 * pi * R�. Considere (atribua) para pi o valor 3.14159. Use o
conceito de constante 

Dica: Ao utilizar a f�rmula, procure usar (4/3.0) ou (4.0/3), pois algumas
linguagens (dentre elas o C++), assumem que o resultado da divis�o entre dois inteiros �
outro inteiro */

int main ()
{
	setlocale(LC_ALL, "portuguese");
	float Raio,Area,Volume,PI;
	
	printf("calcule e mostre a �rea da superf�cie e o volume de uma esfera sendo fornecido o valor de seu raio (R). \n");
	
	printf("defina o Raio: ");
	scanf("%f", &Raio);
	
	PI=3.14159;
	
	printf("\nValor de PI: %f \n", PI);
	
	Area= 4 * PI * pow(Raio,2);
	
	printf("o valor da �rea �: %f \n", Area);
	
	Volume= (4/3.0) * PI * pow(Raio,3);
	
	printf("o valor do Volume �: %f \n", Volume);
	
	
	return 0;
}

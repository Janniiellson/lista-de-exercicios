#include <stdio.h>
/*8. Elabore um programa que faça a leitura de vários números inteiros até que se digite
um número negativo. O programa tem de retornar o maior e o menor número lido*/

int main()
{
	
	int n, maior=-99999, menor=99999;
	
	do
	{
	printf("digite um numero: ");	
	scanf("%d",&n);
		
		if(n>maior)
		{
			maior=n;
		}
		else if (n<menor)
		{
			menor=n;
		}
	}
	while(n>0);
	
	printf("o menor numero eh: %d \n", menor);
	
	printf("o maior numero eh: %d \n", maior);
	
}

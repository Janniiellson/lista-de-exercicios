#include <stdio.h>
/*8. Elabore um programa que fa�a a leitura de v�rios n�meros inteiros at� que se digite
um n�mero negativo. O programa tem de retornar o maior e o menor n�mero lido*/

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

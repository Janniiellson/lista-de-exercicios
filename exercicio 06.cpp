#include <stdio.h>

/*6. Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000
que são múltiplos de 3 ou 5.*/
//
int main ()
{
	int i, soma, ult;
	
	
	for (i=1;i<1000;i++)
	{
	 		
		if (i%3==0)
		{
			printf("%d \n",i);	
		
		ult=i;
		
		soma=ult+i	
		
		}
		
		
	}
	
		printf("%d \n",soma);	
		
	return 0;
}

#include <stdio.h>

/*5. Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo:
Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/
int main()
{
	int numero, divisor,i;
	
	printf("escolha um numero: ");
	scanf("%d", &numero);
	
		printf("divisores de %d: \n",numero);
		
		
	for(i=1;i<=numero;i++)
	{	
		divisor = numero % i==0;  
		
		printf("\n %d ", i);
		if (divisor==true)
		{
		printf("eh divisor \n", divisor);
		}
	}

	
	return 0;
}

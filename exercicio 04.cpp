#include <stdio.h>

/*4. Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou
se est� sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem,
escreva a mensagem �Origem�. Se o ponto estiver sobre um dos eixos escreva �Eixo X� ou
�Eixo Y�, conforme for a situa��o.*/

int main()
{
	int x, y;
		
	printf("defina os valores de x e y a seguir: \n");

	printf("x: ");
	scanf("%d", &x);
	
	printf("y: ");
	scanf("%d", &y);

	if (x>0 && y>0)
	{
		printf("se encontra no quadrante Q1");
	}
	else if(x<0 && y>0)
	{
		printf("se encontra no quadrante Q2");
	}	
	else if(x<0 && y<0)
	{
		printf("se encontra no quadrante Q3");
	}	
	else if(x>0 && y<0)
	{
		printf("se encontra no quadrante Q4");
	}	
	else if(x!=0 && y==0)
	{
		printf("se encontra sobre o eixo y");
	}	
	else if(x==0 && y!=0)
	{
		printf("se encontra sobre o eixo x");
	}	
	else
	{
		printf("se encontra na origem");
	}	
	
	
	
	return 0;
}

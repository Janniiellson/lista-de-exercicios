#include <stdio.h>
#include <math.h>
/*2. Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no
plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais
após a vírgula, segundo a fórmula:*/

int main()
{
	
	float x1, x2, y1, y2, Pot, Dis;

	printf("Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles \n");
	
		printf("valor 1: ");
		scanf("%f", &x1);
	
		printf("valor 2: ");
		scanf("%f", &x2);
	
		printf("valor 3: ");
		scanf("%f", &y1);
	
		printf("valor 4: ");
		scanf("%f", &y2);
	
	Dis= sqrt (pow ((x2-x1)+(y2-y1),2));
	
	printf("a distancia entre os pontos eh: %f", Dis);
	
	return 0;
}

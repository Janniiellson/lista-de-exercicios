#include <stdio.h>

/*7. Escreva um programa que leia um n�mero inteiro, maior ou igual a zero, do usu�rio.
Imprima o en�simo termo da sequ�ncia de Fibonacci. Essa sequ�ncia come�a no termo de
ordem zero, e, a partir do segundo termo, seu valor � dado pela soma dos dois termos
anteriores. Alguns termos dessa sequ�ncia s�o: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/

int main()
{
    int Ncont, aux=3, temp, u=1, p=0, soma;

    //cout << "Exibir quantos termos: ";
    printf("defina o numero inteiro que ira servir de base para mostrar a sequencia");
	//cin >> n;
	scanf("%d", &Ncont);
    
	
	//cout << penult << endl << ult << endl;
	printf("%d \n %d", u, p);
	
    while(aux<=Ncont)
	{
        //cout << (ult+penult) << endl;
		soma=u+p;
		
		printf("%d\n", soma);
		
        temp = p;
        p = u;
        u = u + temp;

        aux++;
    }

    return 0;
}

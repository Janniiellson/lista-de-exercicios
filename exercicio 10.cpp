#include <stdio.h>
//10. Faça um programa que leia 10 inteiros e imprima sua média

int main()
{
	
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10, media;
	
	printf("defina a primeira");
	scanf("%d", &n1);
	printf("defina a segunda ");
	scanf("%d", &n2);
	printf("defina a terceira ");
	scanf("%d", &n3);
	printf("defina a quarta ");
	scanf("%d", &n4);
	printf("defina a quinta ");
	scanf("%d", &n5);
	printf("defina a sexta ");
	scanf("%d", &n6);
	printf("defina a setima ");
	scanf("%d", &n7);
	printf("defina a oitava");
	scanf("%d", &n8);
	printf("defina a nona ");
	scanf("%d", &n9);
	printf("defina a decima");
	scanf("%d", &n10);
	
	media=(n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/5;
	
	printf("media: %d", media);
	
	return 0;
}

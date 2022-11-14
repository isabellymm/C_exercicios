#include<stdio.h>

int x;

main()
{	
	printf("Digite o numero: ");
	scanf("%d",&x);

	if(x%2==0)
		printf("%d é par", x);
	else
		printf("%d e impar", x);
}

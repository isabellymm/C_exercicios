#include <stdio.h>

// inverte um número inteiro

int num,result,dez,uni;

int main()
{	
	printf("Informe um numero inteiro: ");
	scanf("%d",&num);
	dez = num/10;
	uni = num % 10;
	result = uni * 10 + dez;
	printf("O numero invertido e : %d",result);
}
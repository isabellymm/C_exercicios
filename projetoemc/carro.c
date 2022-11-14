#include <stdio.h>

float preco,impo,comi,result;
char nome;

float main()
{	
	char nome[20];
	printf("Digite o nome do carro: ");
	scanf("%s", nome);
	printf("Informe o valor do carro: ");
	scanf("%f",&preco);
	preco*= 1 + 0.45 + 0.28; 
	printf("Nome - %s \n",nome);
	printf("Preco - %.2f",preco);
	
	return 0;
}
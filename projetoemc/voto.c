#include <stdio.h>

int ano_a,ano_n,idade;

int main()
{
 printf("Informe o ano de nascimento: \n");
 scanf("%d",&ano_n);
 printf("Informe o ano atual: \n");
 scanf("%d",&ano_a);
 
 idade = ano_a - ano_n;
	
	if (idade <16)
		printf("Voce nao pode votar! \n");
	else
	if ((idade >= 16 && idade < 18) || idade>70)
		printf("Voto nao obrigatorio! \n");
	else
		printf("Voto obrigatorio! \n");
	
	printf("Idade: %d ",idade);

}
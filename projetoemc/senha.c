#include <stdio.h>

int senha_valida, senha;

int main()
{	
	senha_valida = 21468;
	printf("--Verificacao de Senha-- \n");
	printf("Informe a senha : \n");
	scanf("%d",&senha);
	
	
	if (senha == senha_valida)
		printf("Acesso Permitido!");
	else
		printf("Acesso Negado!");
}
#include <stdio.h>

int n2,n5,n10,n20,n50,n100,n200;
int saque;

//entrada = input do cliente e qual o valor do saque
//processamento = calc cedulas
//saída = a qtd de notas ultilizadas 

int main()
{
    printf("Informe o valor desejado p/ saquar: \n");
    scanf("%d",&saque);
    

    n200 = saque / 200;
    saque = saque % 200; 

    n100 = saque / 100;
    saque = saque % 100; 

    n50 = saque / 50;
    saque = saque % 50; 

    n20 = saque / 20;
    saque = saque % 20; 

    n10 = saque / 10;
    saque = saque % 10; 

    n5 = saque / 5;
    saque = saque % 5; 

    n2 = saque / 2;
    saque = saque % 2; 

    printf("----Notas Ultilizadas----\n");
    printf("Notas200 -- %d \n",n200);
    printf("Notas100 -- %d \n",n100);
    printf("Notas 50 -- %d \n",n50);
    printf("Notas 20 -- %d \n",n20);
    printf("Notas 10 -- %d \n",n10);
    printf("Notas 5  -- %d \n",n5);
    printf("Notas 2  -- %d \n",n2);
    printf("--------------------------");

    return 0;
}
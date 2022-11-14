#include<stdio.h>

int x;

int main()
{	
	printf("Digite o numero: ");
	scanf("%d",&x);

	if(x%2==0){
		x *= 2;
		printf("O numero e par e o Dobro do valor e : %d \n",x);
	}else{
	 if(x%2==1)
	  x *= 3;
	  printf("O numero e impar e o Triplo do valor e :  %d \n",x);
    }
}
#include<stdio.h>

// jan 31 , feb 28 , marco 31 , abril 30 , maio 31 , junho 30 , julho 31 , ago 31 , set 30 , out 31 , nov 30 , dez 31

int mes;

int main(){

	printf("Descubra os dias do mes!");
	printf("Digite o mes (1-12) :");
	scanf("%d",&mes);
	
	
	if ((mes == 1) || (mes == 3)|| (mes == 5) || (mes == 7)|| (mes == 8) || (mes == 10) || (mes == 12)){
		printf("Mes com 31 dias");
		
   }else{
		if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
		printf("Mes com 30 dias");	
		else{
			if (mes == 2)
				printf("Mes com 28 dias");
		}

}
	
}
#include <stdio.h>
//real para dol
float real,result,dol;

float main()
{	
	printf("Informe o valor do dolar : ");
	scanf("%f",&dol);
	printf("Informe o valor do real : ");
	scanf("%f",&real);
	result = real /dol;
	printf("A quantidade em dolar e : $ %.2f",result);
	return 0;
}
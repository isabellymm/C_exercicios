#include <stdio.h>
//dol para real
float real,result,dol;

float main()
{	
	printf("Informe o valor do real : ");
	scanf("%f",&real);
	printf("Informe o valor do dol : ");
	scanf("%f",&dol);
	result = dol /real;
	printf("A quantidade em reais e : R$ %.2f",result);
	return 0;
}
#include <stdio.h>
int main(void)
{
float n1,n2,n3,result;
	
printf("Informe a 1 nota: \n");
scanf("%f",&n1);
printf("Informe a 2 nota: \n");
scanf("%f",&n2);
printf("Informe a 3 nota: \n");
scanf("%f",&n3);
	
result = (n1 + n2+ n3) / 3;
	
printf("Media: %.2f",result);
}
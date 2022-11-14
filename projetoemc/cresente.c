#include <stdio.h>

int x,y,z;

int main(){
	printf("Informe o 1 numero : ");
	scanf("%d",&x);
	printf("Informe o 2 numero : ");
	scanf("%d",&y);
	printf("Informe o 3 numero : ");
	scanf("%d",&z);
	
	printf("Menor p/ Maior");
	
	if (x <= y&& y<= z)
    {
      printf("A ordem crescente: %d %d %d\n", x, y, z);
    }
  else if (x <= z && z <= y)
    {
      printf("A ordem crescente: %d %d %d\n", x, z, y);
    }
  else if (y<= x && x <= z)
    {
      printf("A ordem crescente: %d %d %d\n", y, x, z);
    }
  else if (y<= z && z <= x) 
    {
      printf("A ordem crescente: %d %d %d\n", y, z, x);
    }
  else if (z <= x && x <= y) 
    {
      printf("A ordem crescente: %d %d %d\n", z, x, y);
    }
  else 
    {
      printf("A ordem crescente: %d %d %d\n", z, y, x);
    }

}
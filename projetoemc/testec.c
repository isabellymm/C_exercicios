#include <stdio.h>

int main(){
  int arr[50],num,x,y,temp;
  printf("numeros de elementos na array: ");
  scanf("%d",&num);
  printf("valores dos elementos:");
  for(x = 0; x < num ; x ++ )
    scanf("%d",&arr[x]);

  for(x = 0; x < num - 1;x++){
    
    for(y = 0; y < num - x - 1; y++){
      
      if(arr[y] > arr[y + 1]){
        
        temp = arr[y];
        arr[y] = arr[y + 1];
        arr[y+ 1] = temp;
      }
    }
  }
  printf("Array depois de implementar bubble sort:");

  for(x = 0; x < num; x++){
    printf("%d ",arr[x]);
  }
  return 0;
}

/*
printf("Array antes de implementar bubble sort: ");
  printf("%d",&arr[x]);
*/
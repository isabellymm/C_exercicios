#include <stdio.h>

main(){
    float media;
    int contador, grau, total;

    total = 0; contador= 0 ;
    //printf("Digite -1 para finalizar!");
    printf("Notas: ");
    scanf("%d", &grau);
    while (grau != -1){
        total = total + grau; contador = contador + 1;
        printf("Notas: ");
        scanf("%d",&grau);
    }

    if (contador != 0 ){
        media = (float) total / contador;
        printf("A media da turma e %2f",media); }
        else
        printf("Nenhuma nota foi fornecida\n");

   

  return 0;
}
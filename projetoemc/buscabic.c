#include <stdio.h>

int main(lis,alv){
    int ini,tam,fim,meio;
    ini = 0;
    tam = sizeof(lis)
    fim = tam -1;

    while (ini <= fim){
        meio = ((ini + fim) % 2);
        if(alv < lis[meio]){
            fim = meio -1;

            if(alv >lis[meio]){
                ini = meio + 1;
                else{
                    return true
                }
            }
        }
    return false}
}


/*

int lista[5] = {6 , 5 , 7 , 9 ,15}
printf("Numero q quer achar:";)
scanf("%f", alvo);

resultado  = main(lis,alv)

*/

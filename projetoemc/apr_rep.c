# include <stdio.h>

main(){
    int aprovacoes = 0, reprovacoes = 0, aluno = 1, resultado;
    
    while (aluno <= 10){
        printf("Entre com o resultado (1 = aprov, 2 = repro) : ");
        scanf("%d", resultado);
        if (resultado == 1)
            aprovacoes = aprovacoes + 1;
        else
            reprovacoes = reprovacoes + 1;
        aluno = aluno + 1;   
    }
    printf("Aprovados %d\n", aprovacoes);
    printf("Reprovados %d\n", reprovacoes);

    if (aprovacoes > 8)
        printf("Cobrar taxa escolar\n");
        return 0;
}

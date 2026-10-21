#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt-BR.UTF-8"); 

    int notas[5]; 
    int i, soma = 0 ; 
    float media; 


    for(i = 0; i<5; i++){
        printf("Digite a nota do %dº aluno: ", i + 1); 
        scanf("%d", &notas[i]); 

        soma += notas[i]; 
    }
    media = soma/5; 
    printf("A média da turma foi: %d\n", media); 
    return 0; 
}
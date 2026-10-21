#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt-BR.UTF-8"); 

    int numeros[6]; 
    int i; 

    for(i = 0; i<6; i++){
        printf("Digite o %dº numero: ", i+1); 
        scanf("%d", &numeros[i]); 
    }

    printf("\n Números digitados: \n"); 
    for(i= 0; i<6; i++){
        printf("%d\n", numeros[i]);
    }

    return 0; 
}
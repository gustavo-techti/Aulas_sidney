#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt-BR.UTF-8"); 

    int numeros[5]; 
    int i; 

    for(i = 0; i<5; i++){
        printf("Digite o %dº numero: ", i+1); 
        scanf("%d", &numeros[i]); 
    }

    printf("\n Números digitados na ordem inversa: \n"); 
    for(i= 4; i>=0; i--){
        printf("%d\n", numeros[i]);
    }

    return 0; 
}
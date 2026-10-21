#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt-BR.UTF-8"); 

    int idade[5]; 
    int i, maiorIdade = 0 ; 


    for(i = 0; i<5; i++){
        printf("Digite a idade da pessoa %d: ", i + 1); 
        scanf("%d", &idade[i]); 

        if(idade[i]>=18){
            maiorIdade++; 
        }
    }
    printf("A quantidade de pesoas maior de idade foi: %d\n", maiorIdade); 
    return 0; 
}
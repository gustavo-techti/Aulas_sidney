#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt-BR.UTF-8"); 

    int numeros[10]; 
    int i, numerosPares = 0 ; 


    for(i = 0; i<10; i++){
        printf("Digite o %dº número: ", i + 1); 
        scanf("%d", &numeros[i]); 

        if(numeros[i]%2==0){
            numerosPares++; 
        }
    }
    printf("A quantidade de numeros pares foi: %d\n", numerosPares); 
    return 0; 
}
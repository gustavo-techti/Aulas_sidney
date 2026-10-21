#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt-BR.UTF-8"); 

    int numeros[6], numeroProcurar; 
    int i, quantidadeApareceu =0; 


    for(i = 0; i<6; i++){
        printf("Digite o %dº número: ", i + 1); 
        scanf("%d", &numeros[i]); 
    }
    printf("Digite o numero que você quer procurar:"); 
    scanf("%d", numeroProcurar); 

    for(i = 0; i<6; i++){
        if(numeroProcurar==numeros[i]){
            printf("O numero foi encontrado com sucesso!!!\n "); 
            printf("Posição: %d\n", i);
            quantidadeApareceu++; 
        }
    }
    if(quantidadeApareceu==0){
        printf("número não encontrado.\n"); 
    }else{
        printf("O número apareceu %d vezes.\n", quantidadeApareceu);
    }


    return 0; 
}
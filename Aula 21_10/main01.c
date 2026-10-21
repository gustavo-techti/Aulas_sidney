#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt-BR.UTF-8"); 

    int numeros[3];
    numeros[0] = 10; 
    numeros[1] = 20;
    numeros[2] = 30;

    printf("Primeiro numero: %d\n", numeros[0]); 
    printf("Segundo numero: %d\n", numeros[1]);
    printf("Terceiro numero: %d\n", numeros[2]);
}
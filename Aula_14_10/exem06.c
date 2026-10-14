#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	system("chcp 65001 > nul"); 
	setlocale(LC_ALL, "portuguese"); 
	
	int numero = 0, algarismo = 1; 
	do{
		printf("Digite um numero.\n"); 
		scanf("%d", &numero); 
	}while(numero<0); 
	
	while(numero>=10){
		numero = numero /10; 
		algarismo++; 
	}
	printf("Resultado: %d algorismo", algarismo); 
	
	
}

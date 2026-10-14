#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	system("chcp 65001 > nul"); 
	setlocale(LC_ALL, "portuguese"); 
	
	int num, soma = 0; 
	
	do{
		printf("Por favor, Digite um número válido. \n"); 
		scanf("%d", &num); 
		if(num != 0){
			soma+=num; 
		}	
	}while(num !=0); 
	
	printf("Programa Encerrado. \n"); 
	printf("A soma dos números válidos digitados foi: %d\n", soma); 
	
	return 0; 
}

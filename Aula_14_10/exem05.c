#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	system("chcp 65001 > nul"); 
	setlocale(LC_ALL, "portuguese"); 
	
	int secreto = 80, num, contador = 0; 
	do{
		printf("Tente Adivinhar o numero secreto. \n"); 
		scanf("%d", &num);
		
		if(num>80){
			printf("O numero que voce digitou foi maior que o numero secreto.\n"); 
		}else if(num< 80){
			printf("O numero que voce digitou foi menor que o numero secreto.\n"); 
		}else{
			printf("Isso ai, voce acertou o numero.\n"); 
		}
		
		contador++; 
	}while(num!= 80); 
	printf("Você acertou em %d tentativas. \n", contador); 
	return 0; 
}

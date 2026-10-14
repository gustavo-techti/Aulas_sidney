#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	system("chcp 65001 > nul"); 
	setlocale(LC_ALL, "portuguese"); 
	
	int  nota = 0; 
	
	do{
		printf("Por favor, digite uma nota entre 0 e 10.\n "); 
		scanf("%d", &nota); 
		
		if(nota>=0 && nota <= 10){
			printf("Nota registrada com sucesso.\n");
		}else{
			printf("Nota inválide, por favor, tente novamente"); 
		}
		
		
	}while(nota<0 || nota >10 ); 
	
	return 0; 
}

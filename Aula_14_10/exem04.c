#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	system("chcp 65001 > nul"); 
	setlocale(LC_ALL, "portuguese"); 
	
	int op, numtab, i = 0, numver; 
	
	do{
		printf("--MENU--"); 
		printf("1 - Mostrar Tabuada.\n"); 
		printf("2 - verifique se é PAR ou IMPAR.\n"); 
		printf("0 - Sair do programa.\n");
		
		printf("Digite o que você deseja fazer. \n"); 
		scanf("%d", &op);
		
		switch(op){
			case 1: 
			printf("Digite o númer que você deseja ver a tabuada.\n"); 
			scanf("%d", &numtab); 
			
			for(i = 1; i <= 10; i++){
				printf("%d X %d = %d. \n", numtab, i, numtab*i);
			}
			break;
			case 2: 
			printf("Digite o numero que você quer verificar"); 
			scanf("%d", numver); 
			
			if(numver % 2 == 0 ){
				printf("O número digitado foi um número par.");
			}else{
				printf("O número digitado foi um número impar.");
				
			}
			break; 
			default: 
			printf("Opção inválida, tente novamente.");
		}
	} while(op != 0);
	
	return 0; 
}

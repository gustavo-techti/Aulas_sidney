#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	system("chcp 65001 > nul"); 
	setlocale(LC_ALL, "portuguese"); 
	int opcao; 
	printf("==MENU PRINCIPAL==\n"); 
	printf("1 - Cadastrar usuários\n");
	printf("2 - Listar usuários\n");
	printf("3 - Excluir usuários\n");
	printf("4 - Sair do programa\n");
	
	printf("\n Escolha uma opção"); 
	scanf("%d", &opcao); 
	
	switch(opcao){
		case 1:
			printf("\nVocê escolheu cadastrar um usuário. "); 
			break; 
			case 2: 
			printf("\nVocê escolheu listar o usuário. "); 
			break; 
			case 3: 
			printf("\nVocê escolheu excluir o usuário. "); 
			break; 
			case 4: 
			printf("\nVocê escolheu sair. "); 
			break; 
			default:
				printf("\nOpção inválida"); 
	}
	
	return 0; 
}

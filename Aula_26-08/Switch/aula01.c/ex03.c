#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	system("chcp 65001 > nul"); 
	setlocale(LC_ALL, "portuguese"); 
	
	int dia; 
	
	printf("--Dias da semana--");
	printf("\n1 = Domingo"); 
	printf("\n2 = Segunda");
	printf("\n3 = Terça");
	printf("\n4 =Quarta");
	printf("\n5 = Quinta");
	printf("\n6 = Sexta");
	printf("\n7 = Sabado \n");
	
	printf("Escolha uma opção, por favor");
	scanf("%d", &dia); 
	
	switch(dia){
		case 1: 
		printf("Você escolheu a opção 1, Domingo"); 
		break; 
		case 2: 
		printf("Você escolheu a opção 2, Segunda"); 
		break;
		case 3: 
		printf("Você escolheu a opção 3, Terça"); 
		break;
		case 4: 
		printf("Você escolheu a opção 4, Quarta"); 
		break;
		case 5: 
		printf("Você escolheu a opção 5, Quinta"); 
		break;
		case 6: 
		printf("Você escolheu a opção 6, Sexta"); 
		break;
		case 7: 
		printf("Você escolheu a opção 7, Sabado"); 
		break;
		default:
			printf("Você escolheu uma opção inválida, tente novamente e escolha uma opção entre 1 e 7");
			
	}
	
	

	
	return 0; 
}

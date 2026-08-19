#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // usar a função setlocale
#include <string.h> // Usar função system 

#ifdef _WIN32
#include <windows.h>
#endif

int main(){
	system("chcp 65001 > nul");	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("DIGITE UM NÚMERO QUALQUER, POR FAVOR: ");
	scanf("%d", &numero);
	
	if(numero >= 0){
		printf("O NÚMERO DITADO FOI UM NÚMERO POSITIVO")	;
	}else{
		printf("O NÚMERO DITADO FOI UM NÚMERO NEGATIVO");
	}
	return 0;
		
	}

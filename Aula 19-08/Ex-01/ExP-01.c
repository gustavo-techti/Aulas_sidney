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
	
	int idade; 
	
	printf("Digite a sua idade, por favor: ");
	scanf("%d", &idade);
	
	if(idade <12 || idade>59){
		printf("Você possi entrada grauita para o evento");
		
	}else{
		printf("Você NÃO possui entrada gratuita, deverá comprar o seu ingresso.");
	}
	
	return 0;
		
	}

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
	
	float tempe;
	
	printf("Digite o grau da temperatura, por favor:");
	scanf("%f", &tempe);
	
	if(tempe >=35){
		printf("Está MUITO quente "); 
	} else if(tempe >=25){
		printf("Está quente "); 
	} else if(tempe >=18){
		printf("Clima agradável "); 
	} else{
		printf("Clima Frio ");
	}
	
	return 0;
		
	}

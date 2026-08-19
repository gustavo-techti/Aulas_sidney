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
	
	float n1, n2, media; 
	
	printf("Digite a primeira nota:");
	scanf("%f", &n1);
	printf("Digite a segunda nota:");
	scanf("%f", &n2);
	
	media = (n1+n2)/2; 
	
	printf("A média do aluno foi: %.2f\n", media);
	
	if(media >=7){
		printf("Aprovado. \n");
	}
	else if(media >= 5 ){
		printf("RECUPERAÇÃO");
	}
	else{
		printf("REPROVADO");
		
	}
	
	return 0; 
	}

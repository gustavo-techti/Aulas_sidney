#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	system("chcp 65001 > nul"); 
	setlocale(LC_ALL, "portuguese"); 
	
	int cont = 1; 
	
	do{
		printf("%d\n", cont); 
		cont++; 
		
	}while(cont<=5); 
	
	return 0; 
}

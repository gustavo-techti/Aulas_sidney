#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
	float km, litros, consumoMedio; 
	printf("Consumo médio\n");
	printf("\n Por favor, digite o quantos quanto Km você andou");
	scanf("%f", &km);
	printf("\n Por favor, digite o quantos quanto litros você consumiu.\n");
	scanf("%f", &litros);
	consumoMedio= km/litros;
	if(consumoMedio<8){
		printf("Consumo alto.");
	}else if(consumoMedio>=8 && consumoMedio<=12){
		printf("Consumo médio");
	}else{
		printf("Consumo alto");
	}
	
	
	
}

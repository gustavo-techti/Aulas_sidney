#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
	int segundos;
	float minutos, resto, horas;
	
	printf("Conversor de segundos para horas, minutos e segundos\n");
	printf("\nPor favor, digite a quantidade de segundos que você quer converter. \n");
	scanf("%d", &segundos);
	horas = segundos / 3600;
	minutos = (segundos % 3600)/60;
	segundos = segundos % 60;
	
	
	printf("\n A quantidade de segundos é: %d\n", segundos);
	printf("\n A quantidade de minutos é: %.2f\n", minutos );
	printf("\n A quantidade de horas é: %.2f\n", horas);
	
}

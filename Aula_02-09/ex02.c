#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
	float valorConsumo, valorTotal;
	int totalPessoas, taxa=10;
	
	printf("Consumo restaurante.\n"); 
	printf("Por favor, digite o valor que foi consumido no restaurante.");
	scanf("%f", &valorConsumo); 
	printf("Por favor, digite a quantidade de pessoas que a conta do restaurante sera dividido.");
	scanf("%d", &totalPessoas); 
	printf("O valor consumido foi de: R$%.2f\n", valorConsumo);
	printf("O número de pessoas que estava no restaurente foi: %d\n", totalPessoas);
	printf("a taxa cobrada pelo restaurente foi de: %d%%\n", taxa );
	printf("O valor total da conta é de: R$%.2f\n", valorConsumo*1.1);
	printf("O valor que cada pessoa ira pagar é de: R$ %.2f", ( valorConsumo*1.1)/totalPessoas );
	
}

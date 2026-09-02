#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "portuguese");
	
	float valorcompra, valordin; 
	
	printf("\nPor favor, digite o valor da compra.\n");
	scanf("%f", &valorcompra);
	printf("\nPor favor, digite o valor que você dara para pagar a sua compra.\n");
	scanf("%f", &valordin);
	
	if(valorcompra>valordin){
		printf("Saldo insuficiente, por favor, tente novamente e informe um valor maior.");
	}else if(valorcompra==valordin){
		printf("Você informou o valor exato da compra, portanto, na há troco.");
	}
	else{
		printf("Você informou um valor maior que o da sua compra, logo, vc tem %f de troco", valordin-valorcompra);
	}
	
	
}

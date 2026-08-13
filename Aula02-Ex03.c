#include <stdio.h>
int main(){
	int idade;
	char conceito;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Voce tem %d anos.\n", idade);
	
	printf("Digite o conceito: ");
	scanf(" %c",&conceito);
	printf("Seu conceito e : %c\n", conceito);
	
	return 0;
}

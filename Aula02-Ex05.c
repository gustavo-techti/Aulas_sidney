/*Receber o valor de um produto, digitar o percentual de desconto, mostrar
o valor de desconto e o preco final do produto.*/
#include <stdio.h>
int main(){
	float preco, desconto, valorDesconto, precoFinal;
	
	printf("Digite o preco do produto: ");
	scanf("%f", &preco);	
	printf("Digite o percentual do desconto: ");
	scanf ("%f", &desconto);
	
	valorDesconto = preco * (desconto/100);
	precoFinal = preco - valorDesconto;
	
	printf("\nPreco original: R$ %.2f\n", preco);
	printf("Desconto aplicado: R$ %.2f\n", valorDesconto);
	printf("Preco final: R$ %2.f\n", precoFinal);
	
	return 0;
	
}

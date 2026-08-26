#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	system("chcp 65001 > nul"); 
	setlocale(LC_ALL, "portuguese"); 
	
	int opcao, quantidade; 
	float preco = 0, total; 
	printf("===Cardápio===\n");
	
	printf("1- Hambúguer.........R$18,00\n"); 
	printf("2- Cachorro quemte...R$12,00\n");
	printf("3- Batata Frita......R$15,00\n");
	printf("4- Refrigerante......R$10,00\n");
	
	printf("Escolha um produto, por favor:");
	scanf("%d", &opcao);
	printf("Digite a quantidade, por favor:");
	scanf("%d", &quantidade);
	
	switch(opcao){
		case 1: 
		printf("\nProduto escolhido: Hambúrguer"); 
		preco = 18.00; 
		break; 
		case 2: 
		printf("\nProduto escolhido: Cachorro quente"); 
		preco = 12.00; 
		break;
		case 3: 
		printf("\nProduto escolhido: Batata frita"); 
		preco = 15.00; 
		break;
		case 4: 
		printf("\nProduto escolhido: Refrigerante"); 
		preco = 10.00; 
		break;
		default:
		printf("opção inválida, por favor, tente novamente e escolha uma opção entre 1 e 4.");
	}
	if(preco>0){
		total = preco * quantidade; 
		printf("\nPreço unitário: R$%.2f\n", preco);
		printf("Quantidade: %d\n", quantidade);
		printf("Valor total: %.2f\n", total);
		
	}

	
	return 0; 
}

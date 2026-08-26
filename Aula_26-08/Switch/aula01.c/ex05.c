#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
	system("chcp 65001 > nul"); 
	setlocale(LC_ALL, "portuguese"); 
	
	char nome[100]; 
	int opcao;
	float valorCompra, valorFinal = 0;
	
	printf("==Sistema de pagamentos. ==");
	printf("\nDigite o nome completo do cliente");
	fgets(nome, sizeof(nome), stdin);
	nome[strcspn(nome, "\n")]='\0'; 
	printf("Digite o valor da compra: R$"); 
	scanf("%f", &valorCompra); 
	printf("\n ==FORMAS DE PAGAMENTO==\n");
	printf("1 - PIX: 10%% DE DESCONTO\n");
	printf("2 - DINHEIRO: 5%%\n");
	printf("3 - CARTÃO DÉBITO: 0%% DE DESCONTO\n");
	printf("4 - CARTÃO CRÉDITO: 8%% DE ACRESCISMO\n");
	
	printf("\n Por favor, escolha a forma de pagamento:");
	scanf("%d", &opcao);
	switch(opcao){
		case 1:
			printf("Você escolheu a forma de pagaento via PIX, e tem 10% de desconto"); 
			valorFinal = valorCompra - (valorCompra*10);
		break;
		case 2:
			printf("Você escolheu a forma de pagaento via DINHEIRO, e tem 5% de desconto"); 
			valorFinal = valorCompra - (valorCompra*0.5);
		break;
		case 3:
			printf("Você escolheu a forma de pagaento via CARTÃO DÉBITO, e tem 0% de desconto");
			valorFinal = valorCompra ;
		break;
		case 4:
			printf("Você escolheu a forma de pagaento via CARTÃO DÉBITO, e tem 8% de acrescimo"); 
			valorFinal = valorCompra + (valorCompra*0.8);
		break;
		default:
			printf("Forma de pagamento inválida");
	}
	if(opcao >= 1 && opcao<=4){
		printf("===Resumo da compra===\n");
		printf("Cliente: %s\n", nome);
		printf("Valor Original: %.2f\n", valorCompra);
		printf("Valor final da compra: %2f\n",valorFinal);
		
	}
	
	
	
	return 0; 
}

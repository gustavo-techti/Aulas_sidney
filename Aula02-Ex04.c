#include <stdio.h>
int main(){
	float base, altura, area, perimetro;
	
	printf ("Digite a base do retangulo: ");
	scanf ("%f", &base);
	
	printf("Digite a altura do retangulo: ");
	scanf ("%f", &altura);
	
	area = base * altura;
	perimetro = 2 * (base + altura);
	
	
	printf("\nArea do retangulo : %.2f\n", area);
	printf("Perimetro do retangulo: %.2f\n", perimetro);
	
	return 0;
}

#include <stdio.h>

int main () {
	float compra;
	float desconto;
	printf("Valor da compra: ");
	scanf("%f", &compra);
	desconto = compra;
	if(compra < 2000){
		compra = compra*0.9;
		desconto = desconto - compra;
	} 
	else {
		if(compra < 3000) {
			compra = compra*0.95;
			desconto = desconto - compra;
		} 
		else {
			if( compra < 5000) {
				compra = compra*0.97;
				desconto = desconto - compra;
			} 
			else {
				compra = compra*0.98;
				desconto = desconto - compra;
			}
		}
	}
	printf("Valor do desconto: R$%.2f\n", desconto);
	printf("Valor da compra com desconto: R$%.2f", compra);
	return 0;
}

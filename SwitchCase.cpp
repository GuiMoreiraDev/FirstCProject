#include<stdio.h>
int main() {
	int resp;
	
	printf("Digite um numero de zero(0) a cinco(5): ");
	scanf("%d", &resp);
	
	switch (resp) {
		case 1:
			printf("\nVoce esta pouquissimo satisfeito!");
		
		break;
		
		case 2:
			printf("\nVoce esta pouco satisfeito!");
		break;
			
		case 3:
			printf("\nVoce esta indiferente");
		break;
			
		case 4:
			printf("\nVoce esta satisfeito!");
		break;
			
		case 5:
			printf("\nVoce esta muito satisfeito!");
		break;
		
		default:
			printf("Por favor, digite um númreo no range informado!");
	}
}

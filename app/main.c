#include "../src/include/frame.h"

int Menu();

int main() {
	srand(time(NULL));
	while (Menu());
	return 0;
}

int Menu() {
	printf("\n\n\n\n\n\n\n\n\n\n\n\n----------- Bem Vindo ao gerador de Pinturas NFT -----------\n");
	printf("1: *\n");
	printf("2: +\n");
	printf("3: X\n");
	printf("4: *+X\n");
	printf("5: Especial para ficar rico!\n");
	printf("0: Sair\n");
	printf("Escolha uma opção: ");
	int opc;
	scanf("%d", &opc);	
	switch (opc) {
	case 1:
		asterisco();
		return 1;
		break;
	case 2:
		soma();
		return 1;
		break;
	case 3:
		x();
		return 1;
		break;
	case 4:
		todos();
		return 1;
		break;
	case 5:
		especial();
		return 1;
		break;	
	default:
		return 0;
		break;
	}	
}
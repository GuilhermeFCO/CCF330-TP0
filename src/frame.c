#include "./include/frame.h"

void printFrame(Frame *f) {
	printf("\n\n");		
	for (int l = 0; l < LENGTH_L; l++) {
		for (int c = 0; c < LENGTH_C; c++) {
			printf("%c", f->frame[l][c]);
		}
		printf("\n");		
	}
	printf("\n\n");		
	getchar();
	printf("Pressione uma tecla para continuar!\n");
	getchar();
}

Frame *newFrame() {
	Frame* f = (Frame*)malloc(sizeof(Frame));
	for (int c = 0; c < LENGTH_C; c++) {
		f->frame[0][c] = '-';
		f->frame[LENGTH_L-1][c] = '-';
	}
	for (int l = 1; l < LENGTH_L-1; l++) {
		f->frame[l][0] = '|';
		f->frame[l][LENGTH_C-1] = '|';
	}
	for (int l = 1; l < LENGTH_L-1; l++) {
		for (int c = 1; c < LENGTH_C-1; c++) {
			f->frame[l][c] = ' ';
		}		
	}	
	return f;
}

int continuar() {
	int continues;
	printf("Deseja fazer outra figura com as mesmas propriedades?\n0: Não\n1: Sim\n-> ");
	scanf("%d", &continues);
	return continues;
}

void asterisco() {
	int n = getN();
	int cord[2];
	Frame *f;
	do
	{
		f = newFrame();
		for (int i = 0; i < n; i++)	{
			getCord(cord);
			while (f->frame[cord[0]][cord[1]] != ' ') getCord(cord);
			f->frame[cord[0]][cord[1]] = '*';
		}
		printFrame(f);
	} while (continuar());	
}

void soma() {
	int n = getN();
	int cord[2];
	Frame *f;
	do
	{
		f = newFrame();
		for (int i = 0; i < n; i++)	{
		
			getCord(cord);
			while (f->frame[cord[0]][cord[1]] != ' ' |
				f->frame[cord[0]-1][cord[1]] != ' ' |
				f->frame[cord[0]+1][cord[1]] != ' ' |
				f->frame[cord[0]][cord[1]-1] != ' ' |
				f->frame[cord[0]][cord[1]+1] != ' ') {
				getCord(cord);
			}
			f->frame[cord[0]][cord[1]] = '*';
			f->frame[cord[0]-1][cord[1]] = '*';
			f->frame[cord[0]+1][cord[1]] = '*';
			f->frame[cord[0]][cord[1]-1] = '*';
			f->frame[cord[0]][cord[1]+1] = '*';
		}
		printFrame(f);
	} while (continuar());	
}

void x() {
	int n = getN();
	int cord[2];
	Frame *f;
	do
	{
		f = newFrame();
		for (int i = 0; i < n; i++)	{
			getCord(cord);
			while (f->frame[cord[0]][cord[1]] != ' ' |
				f->frame[cord[0]-1][cord[1]-1] != ' ' |
				f->frame[cord[0]-1][cord[1]+1] != ' ' |
				f->frame[cord[0]+1][cord[1]-1] != ' ' |
				f->frame[cord[0]+1][cord[1]+1] != ' ' |
				f->frame[cord[0]+1][cord[1]] != ' ' |
				f->frame[cord[0]-1][cord[1]] != ' ' |
				f->frame[cord[0]][cord[1]+1] != ' ' |
				f->frame[cord[0]][cord[1]-1] != ' ' ) {
				getCord(cord);
			}
			f->frame[cord[0]][cord[1]] = '*';
			f->frame[cord[0]-1][cord[1]-1] = '*';
			f->frame[cord[0]-1][cord[1]+1] = '*';
			f->frame[cord[0]+1][cord[1]-1] = '*';
			f->frame[cord[0]+1][cord[1]+1] = '*';
		}
		printFrame(f);
	} while (continuar());	
}

void todos() {
	int n = getN();
	int cord[2];
	int aux;
	Frame *f;
	do
	{
		f = newFrame();
		for (int i = 0; i < n; i++) {
			aux = rand() % 3;
			switch (aux)
			{
			case 0:
				getCord(cord);
				while (f->frame[cord[0]][cord[1]] != ' ') getCord(cord);
				f->frame[cord[0]][cord[1]] = '*';
				break;		
			case 1:
				getCord(cord);
				while (f->frame[cord[0]][cord[1]] != ' ' |
					f->frame[cord[0]-1][cord[1]] != ' ' |
					f->frame[cord[0]+1][cord[1]] != ' ' |
					f->frame[cord[0]][cord[1]-1] != ' ' |
					f->frame[cord[0]][cord[1]+1] != ' ') {
					getCord(cord);
				}
				f->frame[cord[0]][cord[1]] = '*';
				f->frame[cord[0]-1][cord[1]] = '*';
				f->frame[cord[0]+1][cord[1]] = '*';
				f->frame[cord[0]][cord[1]-1] = '*';
				f->frame[cord[0]][cord[1]+1] = '*';
				break;
			case 2:
				getCord(cord);
				while (f->frame[cord[0]][cord[1]] != ' ' |
					f->frame[cord[0]-1][cord[1]-1] != ' ' |
					f->frame[cord[0]-1][cord[1]+1] != ' ' |
					f->frame[cord[0]+1][cord[1]-1] != ' ' |
					f->frame[cord[0]+1][cord[1]+1] != ' ' |
					f->frame[cord[0]+1][cord[1]] != ' ' |
					f->frame[cord[0]-1][cord[1]] != ' ' |
					f->frame[cord[0]][cord[1]+1] != ' ' |
					f->frame[cord[0]][cord[1]-1] != ' ' ) {
					getCord(cord);
				}
				f->frame[cord[0]][cord[1]] = '*';
				f->frame[cord[0]-1][cord[1]-1] = '*';
				f->frame[cord[0]-1][cord[1]+1] = '*';
				f->frame[cord[0]+1][cord[1]-1] = '*';
				f->frame[cord[0]+1][cord[1]+1] = '*';
				break;
			default:
				break;
			}
		}
		printFrame(f);
	} while (continuar());	
}

void especial() {
	int n = getN();
	int cord[2];
	Frame *f;
	int aux, cont;
	do
	{
		f = newFrame();
		for (int i = 0; i < n; i++)	{
			getCord(cord);
			cont = 0;
			while (f->frame[cord[0]][cord[1]] != ' ') getCord(cord);
			// f->frame[cord[0]][cord[1]] = '*';
			aux = rand() % 8;
			switch (aux)
			{
			case 0:
				while (f->frame[cord[0]+cont][cord[1]+cont] == ' ' && cont < 11) {
					f->frame[cord[0]+cont][cord[1]+cont] = '\\';
					cont++;
				}				
				break;
			case 1:
				while (f->frame[cord[0]-cont][cord[1]+cont] == ' ' && cont < 11) {
					f->frame[cord[0]-cont][cord[1]+cont] = '/';
					cont++;
				}				
				break;
			case 2:
				while (f->frame[cord[0]-cont][cord[1]-cont] == ' ' && cont < 11) {
					f->frame[cord[0]-cont][cord[1]-cont] = '\\';
					cont++;
				}				
				break;
			case 3:
				while (f->frame[cord[0]+cont][cord[1]-cont] == ' ' && cont < 11) {
					f->frame[cord[0]+cont][cord[1]-cont] = '/';
					cont++;
				}				
				break;
			case 4:
				while (f->frame[cord[0]+cont][cord[1]] == ' ' && cont < 11) {
					f->frame[cord[0]+cont][cord[1]] = '|';
					cont++;
				}				
				break;
			case 5:
				while (f->frame[cord[0]-cont][cord[1]] == ' ' && cont < 11) {
					f->frame[cord[0]-cont][cord[1]] = '|';
					cont++;
				}				
				break;			
			case 6:
				while (f->frame[cord[0]][cord[1]+cont] == ' ' && cont < 11) {
					f->frame[cord[0]][cord[1]+cont] = '-';
					cont++;
				}				
				break;
			case 7:
				while (f->frame[cord[0]][cord[1]-cont] == ' ' && cont < 11) {
					f->frame[cord[0]][cord[1]-cont] = '-';
					cont++;
				}				
				break;
			default:
				break;
			}			
		}
		printFrame(f);
	} while (continuar());
	printFrame(f);
}

int getN() {
	int n;
	printf("Informe o número de símbolos: ");
	scanf("%d", &n);
	while (n <= 0) n = rand() % 101;
	if (n > 100) n = 100;
	return n;
}

void getCord(int cord[2]) {
	cord[0] = 0;
	cord[1] = 0;
	while (cord[0] == 0) cord[0] = rand() % LENGTH_L;
	while (cord[1] == 0) cord[1] = rand() % LENGTH_C;
}
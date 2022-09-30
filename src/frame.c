#include "./include/frame.h"

void print(Frame f) {
	for (int v = 0; v < LENGTH_V; v++) {
		for (int h = 0; h < LENGTH_H; h++)
		{
			printf("%c", f.frame[v][h]);
		}
		printf("\n");		
	}
}

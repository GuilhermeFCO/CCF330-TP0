#include "../src/include/frame.h"

int main() {
	srand(time(NULL));
	int cord[2];
	getCord(cord);
	printf("(%d, %d)", cord[0], cord[1]);
	return 0;
}
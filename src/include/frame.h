#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH_L 20
#define LENGTH_C 80

typedef struct Frame
{
	char frame[LENGTH_L][LENGTH_C];
} Frame;

void printFrame(Frame* f);
Frame *newFrame();
void asterisco();
void soma();
void x();
void todos();
void especial();
int getN();
void getCord(int cord[2]);

#include <stdio.h>

#define LENGTH_V 20
#define LENGTH_H 80

typedef struct Frame
{
	char frame[LENGTH_V][LENGTH_H];
} Frame;

void print(Frame f);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALLSYMS 256

typedef struct SYM SYM;
struct SYM
{
	unsigned char ch;					// ASCII - code
	float freq;							// frequency of occurrence
};
SYM syms[ALLSYMS];

void prepareStructArray(SYM syms[]);
int readFile(FILE *fp, SYM syms[]);
void freqCount(SYM syms[], int count);
void sort(SYM syms[], int size);
void printTable(SYM syms[]);


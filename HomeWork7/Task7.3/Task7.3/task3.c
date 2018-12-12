#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task3.h"

void prepareStructArray(SYM syms[])
{
	for (int i = 0; i < ALLSYMS; i++)
	{
		syms[i].ch = i;
		syms[i].freq = 0;		
	}
}

int readFile(FILE *fp, SYM syms[])
{
	int count = 0;
	int ch;
	while ((ch = fgetc(fp)) != EOF)
	{
		syms[ch].freq++;
		count++;
	}
	return count;
}

void freqCount(SYM syms[], int count)
{
	for (int i = 0; i < ALLSYMS; i++)
	{
		syms[i].freq = syms[i].freq / count;
	}
}

int compare(const void *a, const void *b)
{
	return (int)(10000 * (((struct SYM*)b)->freq - ((struct SYM*)a)->freq));
}

void sort(SYM syms[], int size)
{
	qsort(syms, size, sizeof(struct SYM), compare);
}

void printTable(SYM syms[])
{
	printf(" Sorted symbols:\n");
	printf(" symbol | frequency\n");
	printf(" ------------------\n");

	for (int i = 0; i < ALLSYMS; i++)
	{
		if (syms[i].freq > 0)
		{
			if (syms[i].ch == '\n')
				printf("     \\n | %f  \n", syms[i].freq);
			else printf("     %c  | %f  \n", syms[i].ch, syms[i].freq);
		}
	}
}


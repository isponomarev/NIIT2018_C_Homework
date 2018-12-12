#include <stdio.h>
#include "task3.h"

int main()
{
	int count = 0;
	
	FILE *fp = fopen("test.txt", "rt");
	if (fp == NULL)
	{
		puts("Please, create file test.txt!");
		return 1;
	}

	prepareStructArray(syms);
	count = readFile(fp, syms);
	freqCount(syms, count);
	sort(syms, ALLSYMS);
	printTable(syms);

	fclose(fp);
	return 0;
}
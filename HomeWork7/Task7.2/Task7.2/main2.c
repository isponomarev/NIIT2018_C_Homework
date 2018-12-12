#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task2.h"

int main()
{	
	char buf[SIZE] = { 0 };
	PNODE root = NULL;
	
	FILE *kw = fopen("keywords.txt", "rt");
	FILE *kw2 = fopen("task2.c", "rt");
	if ((kw == NULL) && (kw2 = NULL))
	{
		printf("File not found!\n");
		return 1;
	}
	
	while (fscanf(kw, "%s", buf) == 1)
	{
		chomp(buf);
		root = makeTree(root, buf);
	}
	//printTree(root);
	//putchar('\n');

	searchInFile(root, kw2);
	printTree(root);
	
	fclose(kw);
	fclose(kw2);	

	return 0;
}
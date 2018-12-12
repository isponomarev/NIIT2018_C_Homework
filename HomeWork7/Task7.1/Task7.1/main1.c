#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task1.h"

int main()
{								
	SCOUNTRY *head = NULL;					
	FILE *fp = fopen("fips10_4.csv", "rt");
	if (fp == NULL) 
	{
		printf("File not found!\n");
		return 1;
	}

	head = makeList(fp);
	searchByAbr(head, "RU");
	putchar('\n');
	searchByName(head, "\"Nizhegorod\"");
	//printList(head);

	fclose(fp);

	return 0;
}
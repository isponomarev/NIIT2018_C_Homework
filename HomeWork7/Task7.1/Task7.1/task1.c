#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task1.h"

char* copySub(char *from, char *to)
{
	while (*from != ',' && *from != '\n' && *from != '\0')
		*to++ = *from++;
	*to = '\0';
	return from;
}

SCOUNTRY* setStruct(char *line)
{
	SCOUNTRY* item = (SCOUNTRY*)malloc(sizeof(SCOUNTRY));
	char *p = line;
	p = copySub(p, item->abr2);
	p = copySub(p + 1, item->unid);
	p = copySub(p + 1, item->name);
	item->next = NULL;
	return item;
}

int checkLine(char *line)
{
	char tmp[256];
	char *p = line;
	p = copySub(p, tmp);		// abr
	if (strlen(tmp) != 2)
		return 0;
	p = copySub(p + 1, tmp);	// id
	if (strlen(tmp) != 2)
		return 0;
	return 1;
}

SCOUNTRY* makeList(FILE *fp)
{
	char buf[256];
	SCOUNTRY *head = NULL;
	SCOUNTRY *item = NULL;
	while (fgets(buf, 256, fp))
	{
		if ((head == NULL) && (checkLine(buf)))
		{
			head = setStruct(buf);
			item = head;
		}
		else if (checkLine(buf))
		{
			item->next = setStruct(buf);
			item = item->next;
		}
	}
	return head;
}

void searchByAbr(SCOUNTRY *head, char *abr)
{
	printf(" Search by wordcode of country\n");
	printf("-------------------------------\n");
	while (head)
	{
		if (strcmp(head->abr2, abr) == 0)
		{
			printf(" %3s | %s | %s\n", head->abr2, head->unid, head->name);
		}
		head = head->next;
	}
}

void searchByName(SCOUNTRY *head, char *name)
{
	printf(" Search by name of region\n");
	printf("-------------------------------\n");
	while (head)
	{
		if (strcmp(head->name, name) == 0)
		{
			printf(" %3s | %s | %s\n", head->abr2, head->unid, head->name);
		}
		head = head->next;
	}
}

void printList(SCOUNTRY *head)
{
	printf(" ABR | ID | NAME\n");
	printf("----------------------\n");
	while (head->next)
	{
		printf(" %3s | %s | %s\n", head->abr2, head->unid, head->name);
		head = head->next;
	}
	printf(" %3s | %s | %s\n", head->abr2, head->unid, head->name);
}



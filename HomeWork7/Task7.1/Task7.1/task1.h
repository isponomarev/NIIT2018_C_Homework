#include <stdio.h>

struct COUNTRY
{
	char abr2[3];				// 2word code
	char unid[3];				// number code of country
	char name[256];				// name of country
	struct COUNTRY *next;		// next element of list
};
typedef struct COUNTRY SCOUNTRY;

SCOUNTRY* makeList(FILE *fp);	
SCOUNTRY* setStruct(char *line);
char* copySub(char *from, char *to);	
int checkLine(char *line);
void searchByAbr(SCOUNTRY *head, char *abr);
void searchByName(SCOUNTRY *head, char *name);
void printList(SCOUNTRY *head);						

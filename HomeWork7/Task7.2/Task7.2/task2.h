#include <stdio.h>
#define SIZE 256

struct NODE
{
	char word[SIZE];
	int count;
	struct NODE *left;
	struct NODE *right;
};

typedef struct NODE TNODE;
typedef TNODE* PNODE;
char *chomp(char *buf);							//delete '\n'-symbol
PNODE makeTree(PNODE root, char *word);			//create Tree of keywords
int searchTree(PNODE root, char *words);		//search in Tree for the current character combination
void searchInFile(PNODE root, FILE *fp);		//search words in the input file
void printTree(PNODE root);						//print list of keywords and their count


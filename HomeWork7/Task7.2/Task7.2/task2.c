#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task2.h"

char *chomp(char *buf)
{
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	return buf;
}

PNODE makeTree(PNODE root, char *word)
{
	if (root == NULL)
	{
		root = (PNODE)malloc(sizeof(TNODE));
		strcpy(root->word, word);
		root->count = 0;
		root->left = root->right = NULL;
	}
	else if (strcmp(root->word, word)>0)
		root->left = makeTree(root->left, word);
	else if (strcmp(root->word, word)<0)
		root->right = makeTree(root->right, word);
	else
		root->count++;
	return root;
}

int searchTree(PNODE root, char *words)
{
	if (root == NULL)
		return 0;

	if (strcmp(root->word, words)>0)
	{
		return searchTree(root->left, words);
	}
	else if (strcmp(root->word, words)<0)
	{
		return searchTree(root->right, words);
	}
	else if (strcmp(root->word, words) == 0)
	{
		root->count++;
		return 1;
	}
	return 0;
}

void searchInFile(PNODE root, FILE *fp)
{	
	char sym = 0;
	int i = 0;
	int inWord = 0;
	char word[30] = { 0 };
	while (fscanf(fp, "%c", &sym) == 1)
	{
		if ((sym >= 'a' && sym <= 'z') && inWord == 0)
		{
			word[i] = sym;
			i++;
			inWord = 1;
		}
		else if ((sym >= 'a' && sym <= 'z') && inWord == 1)
		{
			word[i] = sym;
			i++;
		}
		if ((sym < 'a' || sym > 'z') && inWord == 1)
		{
			word[i] = '\0';
			searchTree(root, word);
			i = 0;
		}		
	}
	word[i] = '\0';
	searchTree(root, word);
}

void printTree(PNODE root)
{
	if (root != NULL)
	{
		printTree(root->left);
		printf("%s - %d\n", root->word, root->count);
		printTree(root->right);
	}
}
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
	else if (strcmp(root->word, word) > 0)
		root->left = makeTree(root->left, word);
	else if (strcmp(root->word, word) < 0)
		root->right = makeTree(root->right, word);
	return root;
}

void searchTree(PNODE root, char *word)
 {
	if (root != NULL)
		{
		if (strcmp(root->word, word) == 0)
			{
			root->count++;
			return;
			}
		if (strcmp(root->word, word) > 0)
			searchTree(root->left, word);
		if (strcmp(root->word, word) < 0)
			searchTree(root->right, word);
		}
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
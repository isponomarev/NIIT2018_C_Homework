#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 8 

char* password(char* line)
{
	srand(time(0));
	clock_t now;

	for (int i = 0; i < N; i++)
		{
			if (rand() % 3 == 0)
				line[i] = rand() % ('Z' - 'A' + 1) + 'A';
			else if (rand() % 3 == 1)
				line[i] = rand() % ('z' - 'a' + 1) + 'a';
			else line[i] = rand() % ('9' - '0' + 1) + '0';
		}
	line[N] = '\0';
	
	now = clock();
	while (clock() <= now + CLOCKS_PER_SEC);
	
	return line;
}
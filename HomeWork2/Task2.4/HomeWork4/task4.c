#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char* process(char* line) 
{
	int i, j = strlen(line);	

	for (i = 0; i < j; i++)
	{
		if (line[i] >= '0' && line[i] <= '9')
		{
			for (j = strlen(line) - 1; j > i; j--)
			{
				if ((line[j] >= 'a' && line[j] <= 'z') || (line[j] >= 'A' && line[j] <= 'Z'))
				{
					char temp = line[i];
					line[i] = line[j];
					line[j] = temp;					
					break;
				}
			}
		}
	}
	
	return line;
}
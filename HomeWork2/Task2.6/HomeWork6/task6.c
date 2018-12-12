#include <stdio.h>
#include <string.h>
#define S ' '			// You can set any symbol 

char *clear(char *line) 
{
	int i = 0, j = 0;
	int length = strlen(line);	
		
	for (i = 0; i < length; i++)
	{		
		while (line[i] == S && line[i + 1] == S)
		{				
			for (j = i + 1; j < length; j++)
			{
				line[j] = line[j + 1];	
			}			
		}	
		if (line[length - 1 - i] == S && line[length - i] == '\0')
			line[length - 1 - i] = '\0';
	}

	if (line[0] == S)
		for (i = 0; i < length; i++)		
			line[i] = line[i + 1];		
			
	return line;
}
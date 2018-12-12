#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* convert(char buf[], double angle, char type)
{
	if (type == 'D')
	{
		angle = 3.14159 / 180 * angle;
		type = 'R';		
	}
	else {
		angle = 180 / 3.14159 * angle;
		type = 'D';		
	}

	sprintf(buf, "%lf%c", angle, type);

	return buf;
}
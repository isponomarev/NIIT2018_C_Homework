#include <stdio.h>
#include <math.h>

#define G 9.81

float height(int currTime, int startHeight)
{
	float currHeight = startHeight - 0.5*G*powf(currTime, 2);
	return currHeight;	
}
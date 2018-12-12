#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task1.h"

int main()
{
	int currTime = 0, startHeight;	
	clock_t now;

	do {
		printf("Enter start height [m]: \n");
		scanf("%d", &startHeight);
	} while (startHeight <= 0);

	while ((height(currTime, startHeight)) > 0)
	{
		printf("t = %d sec   h = %0.2f m \n", currTime, height(currTime, startHeight));
		currTime++;
		now = clock();
		while (clock() <= now + CLOCKS_PER_SEC);
	}

	printf("BABAH! \n");
			
	return 0;
}

/*
������ �1
�������� ���������, ����������� ������ ���������� �����. �����
������ � ������ H, ������� �������� �������������. � �����
������ ������� ����� ������ ���������� ���������� �� �������
L = gt^2/2, ��� g = 9.81 m/c
��������� ����� ����������� ��� � ������� � ������� �� �����-
��� ������� �������� ������ ��� ������������ ����� h.
���������
� ���� ������ �� ��������� ���������, ������������ ����������� ����� �� ������� ���������. ��������� ������ ����������� ��������� �������� ����� ��������� � �������� �� ����� �������:
t=00 c h=5000.0 �
t=01 c h=4995.4 �
...
t=31� h=0234.8 �
BABAH!!!
������
��������� ������ �������� �� ���� �������:
float height(int currTime,int startHeight) - ������ ������ ��� ������ � ������� currTime (startHeight - ��������� ������).
main() - ����������� �������.
*/
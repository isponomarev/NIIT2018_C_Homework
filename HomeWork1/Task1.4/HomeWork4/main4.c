#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"

int main() 
{
	int feet, inches;

	printf("Enter your height [ft'in]: ");
	scanf("%d'%d", &feet, &inches);	
	printf("Your height: %.1f cm \n", convert(feet, inches));
		
	return 0;
}

/*
������ �4
�������� ���������, ������� ��������� ���� �� ������������ ��-
����� (����, �����) � ����������� (����������). ������ ���-
����� � ���� ���� ����� �����, ��������� � ���� �������������
����� � ��������� �� 1 �����. 1 ��� = 12 ������. 1 ���� = 2.54
��.
���������
��������� ������ �������� �� ���� �������:
float convert(int feet,int inches)
main() - ����������� �������
���� ������ � ��������� �������������� � ����: ����'�����, �������� 5'11.
���������� ����������� ��������� �����:
task4.h - �������� ��������� ������� convert.
task4.c - �������� ���������� ������� convert.
float convert(int feet,int inches)
{
// ����� ����������
}
main4.c - �������� ���������� main:
#include "task4.h"
int main()
{
// ����� ����������
}
*/
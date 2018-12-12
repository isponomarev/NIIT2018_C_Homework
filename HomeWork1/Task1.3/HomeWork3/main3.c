#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[20];
	double angle;
	char type;

	do {
		printf("Enter the angle value [for example: 90.00D or 2.00R]: ");
		scanf("%lf %c", &angle, &type);		
	} while ((type != 'R') && (type != 'D'));
		
	printf("Result of converting: %s \n", convert(buf, angle, type));

	return 0;
}

/*
������ �3
�������� ���������, ������� ��������� �������� ���� �� �����-
��� � �������, �, ��������, � ����������� �� ������� ��� �����.
��������: 45.00D - �������� �������� � ��������, � 45.00R - �
��������. ���� ������ �������������� �� ������� %f%c
���������
��������� ������ �������� �� ���� �������:
char * convert(char buf[], double angle, char type)
main() - ����������� �������
������� convert ������ ��������� ����� buf �������, ���������� �������� ���� � �������� ��� ��������, � ����������� �� �������� ������� ����������.
������: convert(buf, 180.0, 'D') ������ ������: 3.14159R. ������: convert(buf, 3.14159, 'R') ������ ������: 180.0D.
���������� ����������� ��������� �����:
task3.h - �������� ��������� ������� convert.
task3.c - �������� ���������� ������� convert.
char * convert(char buf[], double angle, char type)
{
// ����� ����������
}
main3.c - �������� ���������� main:
#include "task3.h"
int main()
{
// ����� ����������
}
*/
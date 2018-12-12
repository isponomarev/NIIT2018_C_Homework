#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"

int main()
{
	int hour, min, sec;

	printf("Enter the time [HH:MM:SS]: \n");
	scanf("%d:%d:%d", &hour, &min, &sec);
	
	if ((sec < 0) || (sec > 59))
		printf("Uncorrect time! \n");
	else printf(greet(hour, min));
	
	return 0;	
}

/*
������ �2
  �������� ���������, ������� ����������� ������� ����� � 
  ������� ��:��:��, � ����� ������� ����������� � ����������� ��
  ���������� ������� ("������ ���� "������ ����"� �.�.)
���������
�� ������� ����� ������� ��������� ��������:
"����" - � 00:00 �� 06:00
"����" - � 06:00 �� 11:00
"����" - � 11:00 �� 18:00
"�����" - � 18:00 �� 00:00
��������� ������ �������� �� ���� �������:
char * greet(int hour,int min) - ��������� ����������� � ������� ������������ �������
main() - ����������� �������
������� greet ������ ��������� ���� �� ��������� �����:
"Good night!"
"Good morning!"
"Good day!"
"Good evening!"
"Uncorrect time!"
����� �������, � ������� ������ ���� ����������� ��������� ���������, ��������
  return "Good day!";
���������� ����������� ��������� �����:
task2.h - �������� ���� ������: char * greet(int hour,int min);
task2.c - �������� ���������� �������
   char* greet(int hour,int min)
   {
      // ����� ����������
   }
main2.c - �������� ���������� main:
   #include "task2.h"
   int main()
   {
      // ����� ����������
   }
*/
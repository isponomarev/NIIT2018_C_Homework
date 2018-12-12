#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main()
{
	char gender;
	float height, weight;
	
	do {		
		printf("Enter your gender [M - man, W - woman]: \n");
		scanf("%c", &gender);
	} while ((gender != 'M') && (gender != 'W'));
	
	printf("Enter your height [cm]: \n");
	scanf("%f", &height);
	printf("Enter your weight [kg]: \n");
	scanf("%f", &weight);

	if (getRecommendation(gender, height, weight) == 0)
		printf("You have ideal weight \n");
	else if (getRecommendation(gender, height, weight) == 1)
		printf("Your weight is excessive \n");
	else 
		printf("Your weight is not enough \n");

	return 0;
}

/*
������ �1
  �������� ���������, ������� ����������� � ������������ ���,
  ���� � ���, � ����� ����������� ����������� ����� � ����, ����-
  ��� ������������ � ���������� ��������� (��������, ����������,
  �����)
���������
�� ������ ������� ����� ����� ��������������� ������ ���������_���=����-100 - ��� ������ � ���������_���=����-110 - ��� ������.
��������� ������ �������� �� ���� �������:
int getRecommendation(char gender, float height, float weight) - ������ ��������
main() - ����������� �������
�������� ������� gender ������ ��������� ������ 'm' ��� ������ � 'w' ��� ������.
������� getRecommendation ������ ����������: - -1 - ��� ������������ - 1 - ��� ��������� - 0 - ��� �������
���������� ����������� ��������� �����:
task1.h - �������� ���� ������:
  int getRecommendation(char gender, float height, float weight);
task1.c - �������� ���������� �������
   int getRecommendation(char gender, float height, float weight)
   {
      // ����� ����������
   }
main1.c - �������� ���������� main:
   #include "task1.h"
   int main()
   {
      // ����� ����������
   }
*/
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
Задача №4
Написать программу, которая переводит рост из американской си-
стемы (футы, дюймы) в европейскую (сантиметры). Данные вво-
дятся в виде двух целых чисел, выводятся в виде вещественного
числа с точностью до 1 знака. 1 фут = 12 дюймов. 1 дюйм = 2.54
см.
Пояснение
Программа должна состоять из двух функций:
float convert(int feet,int inches)
main() - организация диалога
Ввод данных в программу осуществляется в виде: футы'дюймы, например 5'11.
Необходимо подготовить следующие файлы:
task4.h - содержит заголовок функции convert.
task4.c - содержит реализацию функции convert.
float convert(int feet,int inches)
{
// здесь реализация
}
main4.c - содержит реализацию main:
#include "task4.h"
int main()
{
// здесь реализация
}
*/
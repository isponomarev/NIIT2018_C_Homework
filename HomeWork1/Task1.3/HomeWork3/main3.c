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
Задача №3
Написать программу, которая переводит значение угла из граду-
сов в радианы, и, наоборот, в зависимости от символа при вводе.
Например: 45.00D - означает значение в градусах, а 45.00R - в
радианах. Ввод данных осуществляется по шаблону %f%c
Пояснение
Программа должна состоять из двух функций:
char * convert(char buf[], double angle, char type)
main() - организация диалога
Функция convert должна заполнять буфер buf строкой, содержащей значение угла в градусах или радианах, в зависимости от значений входных параметров.
Пример: convert(buf, 180.0, 'D') выдает строку: 3.14159R. Пример: convert(buf, 3.14159, 'R') выдает строку: 180.0D.
Необходимо подготовить следующие файлы:
task3.h - содержит заголовок функции convert.
task3.c - содержит реализацию функции convert.
char * convert(char buf[], double angle, char type)
{
// здесь реализация
}
main3.c - содержит реализацию main:
#include "task3.h"
int main()
{
// здесь реализация
}
*/
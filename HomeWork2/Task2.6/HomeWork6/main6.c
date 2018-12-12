#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task6.h"

int main()
{
	char line[1000];

	printf("Enter string with extra gaps:\n");
	fgets(line, 1000, stdin);	
	line[strlen(line) - 1] = '\0';

	printf("Your string after cleaning:\n%s\n", clear(line));	
	
	return 0;
}

/*
Задача №6
Написать программу, очищающую строку от лишних пробелов.Лишними счи -
таются пробелы в начале строки, в конце строки и пробелы между словами,
если их количество больше 1.
Пояснение
В данной программе запрещёно создавать дополнительные массивы, то есть необходимо стремиться к экономии памяти.Время выполнения программы значения не имеет.
Состав
Программа должна состоять из двух функций :
char * clear(char * line) - очистка строки line.
main() - организация диалога.
*/
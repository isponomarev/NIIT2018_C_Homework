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
Задача №2
  Написать программу, которая запрашивает текущее время в 
  формате ЧЧ:ММ:СС, а затем выводит приветствие в зависимости от
  указанного времени ("Доброе утро "Добрый день"и т.д.)
Пояснение
За границы можно принять следующие значения:
"ночь" - с 00:00 до 06:00
"утро" - с 06:00 до 11:00
"день" - с 11:00 до 18:00
"вечер" - с 18:00 до 00:00
Программа должна состоять из двух функций:
char * greet(int hour,int min) - генерация приветствия и провека корректности времени
main() - организация диалога
Функция greet должна возврщать одну из следующих строк:
"Good night!"
"Good morning!"
"Good day!"
"Good evening!"
"Uncorrect time!"
Иными словами, в функции должно быть возвращение строковой константы, например
  return "Good day!";
Необходимо подготовить следующие файлы:
task2.h - содержит одну строку: char * greet(int hour,int min);
task2.c - содержит реализацию функции
   char* greet(int hour,int min)
   {
      // здесь реализация
   }
main2.c - содержит реализацию main:
   #include "task2.h"
   int main()
   {
      // здесь реализация
   }
*/
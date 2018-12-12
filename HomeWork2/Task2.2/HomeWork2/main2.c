#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task2.h"

int main()
{	
	int value = 0;
	srand(time(0));	
	int secret = rand() % 100;
			
	do {
		printf("Please Enter number from 1 to 100: ");
		scanf("%d", &value);		
	} while ((value < 1) || (value > 100));
	
	while (turn(value, secret) != 0)
	{
		for (int i = 2; i < 100; i++)     // The counter of trying
		{
			if (turn(value, secret) == 1)
			{
				printf("[try %d] Enter LESS number: ", i);
				scanf("%d", &value);
			}
			else if (turn(value, secret) == -1)
			{
				printf("[try %d] Enter MORE number: ", i);
				scanf("%d", &value);
			}
		}
	}
	printf("\nCongratulations! You guessed!\nSecret number = %d\n", secret);
			
	return 0;
}

/*
Задача №2
Написать программу ”Угадай число”. Программа задумывает число в диапа-
зоне от 1 до 100 и пользователь должен угадать его за наименьшее количество
попыток.
Пояснение
Пользователь вводит число, а программа подсказывает ему: ”больше”, ”меньше”, ”угадал!”.
Состав
Программа должна состоять из двух функций:- int turn(int value, int secret) - проверка числа, введенного пользователем. Функция возвращает положительное число, если число пользователя больше задуманного, отрицательное, если меньше и 0 - если числа совпадают. value - число пользователя, secret - задуманное компьютером число.
main() - организация диалога.
*/
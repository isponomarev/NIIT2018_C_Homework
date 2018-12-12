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
Задача №1
  Написать программу, которая запрашивает у пользователя пол,
  рост и вес, а затем анализирует соотношение роста и веса, выда-
  вая рекомендации к дальнейшим действиям (похудеть, потолстеть,
  норма)
Пояснение
За основу расчета можно взять приблизительную оценку Идеальный_вес=Рост-100 - для мужчин и Идеальный_вес=Рост-110 - для женщин.
Программа должна состоять из двух функций:
int getRecommendation(char gender, float height, float weight) - анализ ситуации
main() - организация диалога
Параметр функции gender должен содержать символ 'm' для мужчин и 'w' для женщин.
Функция getRecommendation должна возвращать: - -1 - вес недостаточен - 1 - вес избыточен - 0 - вес идеален
Необходимо подготовить следующие файлы:
task1.h - содержит одну строку:
  int getRecommendation(char gender, float height, float weight);
task1.c - содержит реализацию функции
   int getRecommendation(char gender, float height, float weight)
   {
      // здесь реализация
   }
main1.c - содержит реализацию main:
   #include "task1.h"
   int main()
   {
      // здесь реализация
   }
*/
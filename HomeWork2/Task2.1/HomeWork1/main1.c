#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task1.h"

int main()
{
	int currTime = 0, startHeight;	
	clock_t now;

	do {
		printf("Enter start height [m]: \n");
		scanf("%d", &startHeight);
	} while (startHeight <= 0);

	while ((height(currTime, startHeight)) > 0)
	{
		printf("t = %d sec   h = %0.2f m \n", currTime, height(currTime, startHeight));
		currTime++;
		now = clock();
		while (clock() <= now + CLOCKS_PER_SEC);
	}

	printf("BABAH! \n");
			
	return 0;
}

/*
Задача №1
Написать программу, имитирующую работу высотомера бомбы. Бомба
падает с высоты H, которая задается пользователем. В любой
момент времени можно узнать пройденное расстояние по формуле
L = gt^2/2, где g = 9.81 m/c
Высотомер бомбы срабатывает раз в секунду и выводит на терми-
нал текущее значение высоты над поверхностью земли h.
Пояснение
В этой задаче мы имитируем сообщения, пересылаемые аппаратурой бомбы на дисплей оператора. Программа должна имитировать секундную задержку между отсчетами и выводить на экран таблицу:
t=00 c h=5000.0 м
t=01 c h=4995.4 м
...
t=31с h=0234.8 м
BABAH!!!
Состав
Программа должна состоять из двух функций:
float height(int currTime,int startHeight) - расчет высоты над землей в секунду currTime (startHeight - начальная высота).
main() - организация диалога.
*/
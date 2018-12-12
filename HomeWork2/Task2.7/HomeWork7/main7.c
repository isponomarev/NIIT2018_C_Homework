#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 1000  
#define COUNT 256

int main()
{
	int i = 0, j = 0;
	char line[N];
	int count[COUNT] = { 0 };

	printf("Enter string from symbols: \n");
	fgets(line, N, stdin);
	while (line[i] != '\n')
	{
		count[line[i]]++;
		i++;
	}
	
	for (j = 0; j < COUNT; j++)      
		if (count[j] > 0)
			printf("%c - %d\n", j, count[j]);
	
	return 0;
}

/*
Задача №7
Написать программу, выводящую таблицу встречаемости символов для введен-
ной пользователем строки. В этой таблице содержится символ строки и число
его повторений.
Пояснение
В этой программе мы стремимся к экономии времени, так что использование дополнительных массивов оправдано
Состав
Программа должна состоять из функции:
main() .
*/
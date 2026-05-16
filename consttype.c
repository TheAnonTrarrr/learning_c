#include <stdio.h>

int main()
{
	enum SNOOKER
	{ RED=1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK };

	enum SNOOKER pair = RED + BLACK;
	printf("Значение пары: %d \n", pair);

	typedef unsigned short int USINT;

	USINT num = 16;
	printf("Беззнаковое короткое целое число: %d \n", num);

	return 0;
}

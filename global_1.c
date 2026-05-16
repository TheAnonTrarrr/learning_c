#include <stdio.h>

static int sum = 100;

int main()
{
	extern int sum;
	printf("Сумма равна %d \n", sum);

	extern int num;
	printf("Число равно %d \n", num);

	return 0;
}

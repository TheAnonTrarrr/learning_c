#include <stdio.h>

int main()
{
	int num = 100;
	double pi = 3.1415926536;

	printf("Целое число - %d \n", num);
	printf("Значения - %d и %f \n", num, pi);
	printf("%%7d отображает %7d \n", num);
	printf("%%07d отображает %07d \n", num);
	printf("Число Пи примерно равно %1.10f \n", pi);
	printf("Выравнивание по правой стороне %20.3f Пи округлённой \n", pi);
	printf("Выравнивание по левой стороне %-20.3f Пи округлённой \n", pi);

	return 0;
}

#include <stdio.h>

int main()
{
	float num = 5.75;
	char letter = 'A';
	int zee = 90;
	int x = 7, y = 5;
	double decimal = 0.1234569;

	printf("Приведение (Преобразование) числа с плавающей точкой типа float в целое число: %d \n", (int)num);
	printf("Приведение (Преобразование) символа в целое число: %d \n", (int)letter);
        printf("Приведение (Преобразование) целого числа в символ %c \n", (char)zee);
	printf("Арифметика чисел с плавающей точкой: %f \n", (float)x / (float)y);
	printf("Приведение (Преобразование) числа типа double в тип float %f \n", (float)decimal);

	return 0;
}

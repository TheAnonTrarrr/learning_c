#include <stdio.h>

int main()
{
	int arr[3];
	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 300;

	char str[10] = {'C', ' ', 'P', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};

	printf("Значение для 1-го элемента: %d \n", arr[0]);
	printf("Значение для 2-го элемента: %d \n", arr[1]);
	printf("Значение для 3-го элемента: %d \n", arr[2]);
	printf("Строка: %s \n", str);

	return 0;
}

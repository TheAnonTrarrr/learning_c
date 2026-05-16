#include <stdio.h>

int main()
{
	int matrix[2][3] = {{'A', 'B', 'C'}, {1, 2, 3}};

	printf("Элемент [0][0] хранит %c \n", matrix[0][0]);
	printf("Элемент [0][1] хранит %c \n", matrix[0][1]);
	printf("Элемент [0][2] хранит %c \n", matrix[0][2]);
	printf("Элемент [1][0] хранит %d \n", matrix[1][0]);
	printf("Элемент [1][1] хранит %d \n", matrix[1][1]);
	printf("Элемент [1][2] хранит %d \n", matrix[1][2]);

	return 0;
}

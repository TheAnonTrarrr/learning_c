#include <stdio.h>

int main()
{
	enum SNOOKER
	{ RED=1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK };

	int total;

	printf("\nЯ забил красный шар, принесший %d очко \n", RED);
	printf("После этого черный, принесший %d очков \n", BLACK);
	printf("За которым последовал еще один красный, принесший %d очко \n", RED);
	printf("И, наконец, синий шар, принесший %d очков \n", BLUE);

	total = RED + BLACK + RED + BLUE;
	
	printf("\nВсего я набрал %d очков \n", total);

	return 0;
}

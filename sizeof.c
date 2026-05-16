#include <stdio.h>
#include <limits.h>

int main()
{
	printf("short int... \tразмер: %zu байт \t", sizeof(short int));
	printf("от %d до %d \n", SHRT_MIN, SHRT_MAX);
	printf("long int... \tразмер: %zu байт \t", sizeof(long int));
	printf("от %ld до %ld \n", LONG_MIN, LONG_MAX);
	printf("char... \tразмер: %d байт \n", sizeof(char));
	printf("float... \tразмер: %d байт \n", sizeof(float));
	printf("double... \tразмер: %d байт \n", sizeof(double));
	return 0;
}

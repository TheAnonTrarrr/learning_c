#include <stdio.h>

int main()
{
	const float PI = 3.141593;
	float diameter, radius, circ, area;

	printf("Введите диаметр окружности в миллиметрах: ");
	scanf("%f", &diameter);

	circ = PI * diameter;
	radius = diameter / 2;
	area = PI * (radius * radius);

	printf("\n\tОкружность равна %.2f мм", circ);
	printf("\n\tПлощадь равна %.2f кв.мм\n", area);

	return 0;
}

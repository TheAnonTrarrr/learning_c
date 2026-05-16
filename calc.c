#include <stdio.h>

int main()
{
	int num1, num2;
	char symb;
	double equation;


	printf("Enter the first integer: ");
	scanf("%d", &num1);

	printf("\nEnter the second integer: ");
	scanf(" %d", &num2);

	printf("\nEnter the action to be performed (+, -, /, *): ");
	scanf(" %c", &symb);


	if ( symb == '+' ) {
		equation = num1 + num2;
		printf("%d plus %d equals %.2f\n", num1, num2, equation);
	}

	else if ( symb == '-' ) {
		equation = num1 - num2;
		printf("%d subtracted by %d equals %.2f\n", num1, num2, equation);
	}

	else if ( symb == '/' ) {
		if ( num2 == 0 ) {
			printf("Err: Cannot be divided by 0\n");
		} else {
			equation = (double)num1 / num2;
			printf("%d divided by %d equals %.2f\n", num1, num2, equation);
		}
	}

	else if ( symb == '*' ) {
		equation = num1 * num2;
		printf("%d multiplied by %d equals %.2f\n", num1, num2, equation);
	}

	else {
		printf("Err: Action is not '+', '-', '/' or '*'. Please try again by rerunning and using legal action...\n");
	}

	return 0;

}

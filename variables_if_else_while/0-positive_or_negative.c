#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	double num;
		printf("Enter a number: ");
	scanf("%lf", &num);
	if (num > 0.0)
		printf("You entered a positive number.");
	else if (num < 0.0)
		printf("You entered a negative number.");
	else
		printf("You entered 0");

	return (0);
}

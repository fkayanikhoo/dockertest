#include <stdio.h>
#include <math.h>

int main() {
	double val;
	printf("%s", "Please enter a number: ");
	scanf("%lf", &val);
	printf("Square root is: %lf\n", sqrt(val));
	return 0;
}

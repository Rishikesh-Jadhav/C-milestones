#include <stdio.h>

double Pow(double x, int n);

int main() {

	double base;
	int power;

	printf("Enter Base: ");
	scanf("%lf", &base);

	printf("Enter Power: ");
	scanf("%d", &power);

	printf("%lf ^ %d = %lf", base, power, Pow(base, power));

}

double Pow(double x, int n) {

	int power = 1, i;

	for (i = 1; i <= n; ++i) {
		power = power * x;
	}

	return power;

}




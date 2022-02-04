#include<stdio.h>

int main(void)
{
	char a = 1;
	int b = 2;
	float c = 4.4;
	double d = 128.3;

	printf("%d %d %f %lf\n", a, b, c, d);

	scanf("%hhd %d %f %lf", &a, &b, &c, &d);

	printf("%d %d %f %lf\n", a, b, c, d);

	return 0;
}

#include<stdio.h>

int main(void)
{
	int a = 10;
	int b = 7;
	int c;

	c = a + b;

	printf("%d + %d = %d\n", a, b, c);

	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);  //나머지

	printf("%d++\n", a++);
	printf("++%d\n", ++a);

	return 0;
}

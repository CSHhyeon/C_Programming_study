#include <stdio.h>
int main(void)
{
	int a, b;
	int c, d, e;
	int dd;

	scanf("%d\n", &a);
	scanf("%d\n", &b);

	c = b / 100; //100의 자리
	dd = b % 100;
	d = dd / 10; //10의 자리
	e = b % 10; //1의 자리

	int x, y, z;

	x = a * e;
	y = a * d;
	z = a * c;

	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);

	z = z * 100;
	y = y * 10;

	printf("%d\n", x + y + z);

	return 0;
}

#include<stdio.h>

int main(void)
{
	char a = 10;   //0000 1010
	char b = 7;    //0000 0111
	int c;

	printf("%d += %d = %d\n", a, b, a += b);
	printf("%d -= %d = %d\n", a, b, a -= b);
	printf("%d *= %d = %d\n", a, b, a *= b);
	printf("%d /= %d = %d\n", a, b, a /= b);
	printf("%d %%= %d = %d\n", a, b, a %= b);

	return 0;
}

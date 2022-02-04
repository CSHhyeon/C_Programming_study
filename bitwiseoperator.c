#include<stdio.h>

int main(void)
{
	char a = 10;   //0000 1010
	char b = 7;    //0000 0111
	int c;

	printf("%d & %d = %d\n", a, b, a & b); //0010 하나라도 0이면 0 --> 2
	printf("%d | %d = %d\n", a, b, a | b); //1111 하나라도 1이면 1 --> 15

	printf("%d ^ %d = %d\n", a, b, a ^ b); //1101 둘이 다르면 1이다. --> 13
	printf("~%d\n", ~a); //1111 0101 1의 보수 --> -11
	printf("%d << %d\n", a << 1, 1); //0001 0100 --> 20 --> 곱하기 2
	printf("%d >> %d\n", a >> 1, 1); //0000 0101 --> 5 __> 나누기 2

	return 0;
}

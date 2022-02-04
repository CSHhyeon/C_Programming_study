#include<stdio.h>

int main(void)
{
	int a = 10;   //1010
	int b = 7;    //0111
	int c;

	printf("%d && %d = %d\n", a, b, a && b); //숫자가 뭐라도 들어가 있으면 1 즉, 1 && 1 --> 1
	printf("%d || %d = %d\n", a, b, a || b); //1||1 --> 1 단, 0이 들어가면 0이 나온다.

	printf("%d & %d = %d\n", a, b, a & b); //0010 하나라도 0이면 0 --> 2
	printf("%d | %d = %d\n", a, b, a | b); //1111 하나라도 1이면 1 --> 15

	return 0;
}

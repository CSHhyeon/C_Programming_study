#include <stdio.h>
int main(void)
{
	int N;
	int i;
	int a;
	scanf("%d", &N);
	for(i = 1; i < N + 1; i++){
	  for(a = 1; a < i + 1; a++){
	    printf("*");
	  }
	  printf("\n");
	}

	return 0;
}

#include<stdio.h>
main()
{
	int a, i;
	printf("®”H");
	scanf("%d", &a);
	for (i = 0; i < 10; i++) {
		a += 1;
		printf("%d ", a);
	}
}
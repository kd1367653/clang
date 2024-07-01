#include<stdio.h>
main()
{
	int a, i, j;
	printf("1  2  3  4  5  6  7  8  9\n");
	printf("=========================\n");
	for (a = 1; a <= 9; a++) {
		printf("%d | ", a);
	}
	printf("\n");
		for (i = 1; i <= 9; i++) {
			for (j = 1; j <= 9; j++) {
				printf("%d ", i * j);
			}
			printf("\n");
		}
}
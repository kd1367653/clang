#include<stdio.h>
main()
{
	int i, j, num;
	printf("���́H");
	scanf("%d", &num);
	i = 0;
	do {
		 j = 0;
		do {
			printf("*");
			j++;
		} while (i >= j);
			printf("\n");
			i++;
	} while (i < num);
}
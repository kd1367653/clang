#include<stdio.h>
main()
{
	int i;
	i = 20;
	do {
		printf("%3d", i);
		if (i == 11) {
			printf("\n");
		}
		i--;
	} while (i >= 1);
}
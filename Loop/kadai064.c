#include<stdio.h>
main()
{
	int i;
	i = 21;
	while (i >= 2) {
		i--;
		printf("%3d", i);
		if (i == 11) {
			printf("\n");
		}
	}
}
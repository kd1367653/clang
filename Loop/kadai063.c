#include<stdio.h>
main()
{
	int i;
	i = 0;
	while (i <= 19) {
		i++;
		printf("%3d", i);
		if (i == 10) {
			printf("\n");
		}
	}
}
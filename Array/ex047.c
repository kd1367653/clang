#include<stdio.h>
main()
{
	float x[3][2], gokei;
	int i,j;
	for (j = 0; j < 3; j++) {
		for (gokei = 0, i = 0; i < 2; i++) {
			printf("x[%d][%d]=", j, i);
			scanf("%f", &x[j][i]);
			gokei += x[j][i];
		}
		printf("%d�s�ڂ̕���=%.2f\n", j, gokei / 2);
	}
}
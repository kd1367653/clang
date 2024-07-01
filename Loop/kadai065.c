#include<stdio.h>
main()
{
	int a, sum = 0, ave;
	printf("整数(-999で終了)？");
	scanf("%d", &a);
	do {
		sum += a;
		printf("整数(-999で終了)？");
		scanf("%d", &a);
	} while (a != -999);
	printf("合計=%d\n平均=%.2f", sum, (float)sum / a);
}
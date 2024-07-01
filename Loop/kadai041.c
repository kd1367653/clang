#include<stdio.h>
main()
{
	int a, gokei = 0, heikin = 0;
	printf("整数(-999で終了)？");
	scanf("%d", &a);
	while (a != -999) {
		gokei += a;
		heikin = gokei / 4;
		printf("整数(-999で終了)？");
		scanf("%d", &a);
	}
	printf("合計=%d 平均=%.2f\n", gokei, (float)gokei/a);
}
#include<stdio.h>
main()
{
	int i, num, sum;
	
	printf("数は？");
	scanf("%d", &num);
	for (sum = 0, i = 0; num != -999; i++)
	{
		sum += num;
		printf("数は？");
		scanf("%d", &num);
	}
	printf("合計=%d平均=%.2f\n", (float); i);
}
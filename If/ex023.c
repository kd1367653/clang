#include<stdio.h>
main()
{
	int h,m,s;
	printf("秒数を入力:");
	scanf("%d", &s);
	if (s<= 5000) {
		h = s / 3600;
		s = s % 3600;
			m = s / 60;
			s = s % 60;
	}
	else
	{
		printf("入力エラー\n");
	}
	printf("%d時間%d分%d秒\n", h, m, s);
}
#include<stdio.h>
main()
{
	int a, gokei = 0, heikin = 0;
	printf("����(-999�ŏI��)�H");
	scanf("%d", &a);
	while (a != -999) {
		gokei += a;
		heikin = gokei / 4;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &a);
	}
	printf("���v=%d ����=%.2f\n", gokei, (float)gokei/a);
}
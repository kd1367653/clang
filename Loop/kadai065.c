#include<stdio.h>
main()
{
	int a, sum = 0, ave;
	printf("����(-999�ŏI��)�H");
	scanf("%d", &a);
	do {
		sum += a;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &a);
	} while (a != -999);
	printf("���v=%d\n����=%.2f", sum, (float)sum / a);
}
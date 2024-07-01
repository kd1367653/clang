#include<stdio.h>
main()
{
	int a;
	printf("整数？");
	scanf("%d", &a);
	if(a < 0) {
		printf("入力値はマイナスです");
	}
	if(a > 0) {
		printf("入力値はプラスです");
	}
	if (a == 0) {
		printf("入力値は０です");
	}
}
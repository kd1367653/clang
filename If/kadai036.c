#include<stdio.h>
main()
{
	int a, b;
	printf("整数1？");
	scanf("%d", &a);
	printf("整数２？");
	scanf("%d", &b);
	if (a < b) {
		printf("%dの方が%dより%d小さい", a, b, b - a);
	}
	if (a > b) {
		printf("%dの方が%dより%d大きい", a, b, a - b);
	}
	if (a == b) {
		printf("%dと%dは等しい", a, b);
	}
}
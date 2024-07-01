#include<stdio.h>
main()
{
	char a;
	printf("１文字入力？");
	scanf("%c", &a);
	if (a >= 'A' && a <= 'z') {
		printf("その文字はアルファベットです");
	}
	else {
		printf("ERROR");
	}
}
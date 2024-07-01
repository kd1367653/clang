#include<stdio.h>
main()
{
	char a;
	printf("アルファベット？");
	scanf("%c", &a);
	if (a >= 'A' && a <= 'Z') {
		printf("その文字は大文字です");
	}
	else {
		printf("その文字は小文字です");
	}
}
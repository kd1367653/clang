#include<stdio.h>
main()
{
	char ch;
	printf("文字を入力:");
	scanf("%c", &ch);
	if (ch >= 'A' && ch <= 'Z') {
		printf("大文字です");
	}
	else {
		printf("その他の文字です");
	}
}
#include<stdio.h>
main()
{
	char a[] = "kobedenshi";
	int i;
	printf("文字列は？");
	scanf("%s", &a[0]);
	i = 0;
	while (a[i] != '\0') {
		i++;
	}printf("文字列：%s  文字数：%d文字", a, i);
}
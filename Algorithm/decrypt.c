#include<stdio.h>
main()
{
	int i;
	char s[11];

	printf("暗号化文字列を入力してください");
	scanf("%s", &s);
	i = 0;
	while (s[i] != '\0') {
		   s[i]--;
		   i++;
	}
	printf("複合化文字列は、%s\n", s);
}
#include<stdio.h>
main()
{
	int i;
	char s[11];

	printf("文字列を入力してください");
	scanf("%s", &s);
	i = 0;
	while (s[i] != '\0') {
		s[i] = s[i] + 1;
		i = i + 1;
	}
	printf("暗号化文字列は%s\n", s);
}
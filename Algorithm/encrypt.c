#include<stdio.h>
main()
{
	int i;
	char s[11];

	printf("���������͂��Ă�������");
	scanf("%s", &s);
	i = 0;
	while (s[i] != '\0') {
		s[i] = s[i] + 1;
		i = i + 1;
	}
	printf("�Í����������%s\n", s);
}
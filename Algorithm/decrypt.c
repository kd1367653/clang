#include<stdio.h>
main()
{
	int i;
	char s[11];

	printf("�Í������������͂��Ă�������");
	scanf("%s", &s);
	i = 0;
	while (s[i] != '\0') {
		   s[i]--;
		   i++;
	}
	printf("������������́A%s\n", s);
}
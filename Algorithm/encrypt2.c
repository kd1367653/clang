#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, n;
	char s[11],k[11];

	srand(time(0));
	printf("���������͂��ĉ�����");
	scanf("%s", &s);
	i = 0;

	while (s[i] != '\0') {
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
		i++;
	}
	printf("�Í���������́A%s\n",s);
	printf("�Í����L�[�́A%s\n", k);
	n = 0;
	while (n<i) {
		n++;
	}
	printf("\n");
}
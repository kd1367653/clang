#include<stdio.h>
main()
{
	int no;
		printf("�������:");
	scanf("%d", &no);
	if (no == 2) {
		printf("�ŏI����28���ł�");
	}
	else {
		if (no == 4 || no == 6 || no == 9 || no == 11) {
			printf("�ŏI����30���ł�");
		}
		else {
			printf("�ŏI����31���ł�");
		}
	}
}

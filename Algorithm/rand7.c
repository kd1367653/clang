#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, b, i = 0;
	srand(time(0));
	rand();
	a = rand() % 1000 + 1;
	printf("�P�`�P�O�O�O�̒��ł�����̐���\�z���Ă�������\n");
	do{
		printf("������̐��́H->");
		scanf("%d", &b);
		if (a > b) {
			printf("������̐���菬�����ł�\n");
		}
		if (a < b) {
			printf("������̐����傫���ł�\n");
		}
		i++;
	} while (a != b);
	printf("����!%d��ڂœ�����܂���\n", i);
}
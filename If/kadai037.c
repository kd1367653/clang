#include<stdio.h>
main()
{
	int a;
	printf("�O����P�O�O�܂ł̐����H");
	scanf("%d", &a);
	if (a > 90) {
		printf("���̐��l�̔��茋�ʂ́u�T�v�ł�");
	}
	if (80 >= a && a <= 90) {
		printf("���̐��l�̔��茋�ʂ́u�S�v�ł�");
	}
	if (50 <= a && a >= 80) {
		printf("���̐��l�̔��茋�ʂ́u�R�v�ł�");
	}
	if (30 >= a && a <= 50) {
		printf("���̐��l�̔��茋�ʂ́u�Q�v�ł�");
	}
	if (a < 30) {
		printf("���̐��l�̔��茋�ʂ́u�P�v�ł�");
	}
}
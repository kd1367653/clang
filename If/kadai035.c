#include<stdio.h>
main()
{
	int a;
	printf("�����H");
	scanf("%d", &a);
	if(a < 0) {
		printf("���͒l�̓}�C�i�X�ł�");
	}
	if(a > 0) {
		printf("���͒l�̓v���X�ł�");
	}
	if (a == 0) {
		printf("���͒l�͂O�ł�");
	}
}
#include<stdio.h>
main()
{
	int h,m,s;
	printf("�b�������:");
	scanf("%d", &s);
	if (s>=0) {
		if (s <= 5000) {
			h = s / 3600;
			s = s % 3600;
			m = s / 60;
			s = s % 60;
		}
		else
		{
			printf("���̓G���[\n");
		}
		printf("%d����%d��%d�b\n", h, m, s);
	}
	else {
		printf("�}�C�i�X�̓G���[�ł�\n");
	}
}
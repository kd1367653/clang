#include<stdio.h>
main()
{
	char shori;
	int su1, su2;

	printf("���������:");
	scanf("%c", &shori);

	printf("���������");
	scanf("%d", &su1, &su2);

	switch (shori)
	{
	case'd':
		if (su1 > su2) {
			printf("�ő�l��%d�ł�\n", su1);
		}
		else
		{
			printf("�ő�l��%d�ł�\n", su2);
		}
		break;
	case's':
		if (su1 < su2) {
			printf("�ŏ��l��%d�ł�\n", su1);
		}
		else {
			printf("�ŏ��l��%d�ł�\n", su2);
		}
		break;
	case'g':

		printf("���v��%d�ł�\n", su1 + su2);
		break;
	case'h':
		printf("���ς�%.2f�ł�\n", (su1 + su2) / 2.0);
		break;
	}
}
#include<stdio.h>
main()
{
	char shori;
	int  su1, su2,su3;
	int s;

	printf("���������:");
	scanf("%c", &shori);

	printf("���������");
	scanf("%d%d%d", &su1, &su2,&su3);

	switch (shori)
	{
	case'd':
		s = su1;
		if (s > su2) {
			s = su2;
		}
		if (s < su3) {
			printf("�ő�l��%d�ł�\n", s);
			break;
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
		else{
			printf("�ŏ��l��%d�ł�\n", su2);
		}
		break;
	case'g':

		printf("���v��%d�ł�\n", su1 + su2 + su3);
		break;
	case'h':
		printf("���ς�%.2f�ł�\n", (su1 + su2 + su3) / 3.0);
		break;
	}
}
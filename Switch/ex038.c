#include<stdio.h>
main()
{
	int su;
	printf("���������");
	scanf("%d", &su);

	switch (su/10)
	{
	case 1:
		printf("10�_��ł�\n");
		break;
	case 2:
		printf("20�_��ł�\n");
		break;
	case 3:
		printf("30�_��ł�\n");
		break;
	case 4:
		printf("40�_��ł�\n");
		break;
	default:
		printf("�G���[(10�`49�����");
		break;
	}
}
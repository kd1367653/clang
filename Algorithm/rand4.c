#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int un;

	srand(time(0));
	un = rand() % 5 + 1;
	printf("���Ȃ��̉^���́A%d�ł�", un);
	switch (un){
	case�@ntf("�ł�");
		break;
	case 2:printf("�ł�");
		break;
	case 3:printf("�ł�");
		break;
	case 4:printf("�ł�");
		break;
	case 5:printf("�ł�");
		break;
	}
}
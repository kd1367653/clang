#include<stdio.h>
main()
{
	char shori;
	int  su1, su2,su3;
	int s;

	printf("処理を入力:");
	scanf("%c", &shori);

	printf("整数を入力");
	scanf("%d%d%d", &su1, &su2,&su3);

	switch (shori)
	{
	case'd':
		s = su1;
		if (s > su2) {
			s = su2;
		}
		if (s < su3) {
			printf("最大値は%dです\n", s);
			break;
		}
		else
		{
			printf("最大値は%dです\n", su2);
		}
		break;
	case's':
		if (su1 < su2) {
			printf("最小値は%dです\n", su1);
		} 
		else{
			printf("最小値は%dです\n", su2);
		}
		break;
	case'g':

		printf("合計は%dです\n", su1 + su2 + su3);
		break;
	case'h':
		printf("平均は%.2fです\n", (su1 + su2 + su3) / 3.0);
		break;
	}
}
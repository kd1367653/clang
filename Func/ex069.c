#include<stdio.h>
main()
{
	int num, sum, cnt;
	sum = cnt = 0;
	printf("�����F");
	while (scanf("%d", &num) != EOF) {
		sum += num;
		cnt++;
		printf("�����F");
	}
	printf("���v=%d  ����=%.2f\n", sum, (float)sum / cnt);
}
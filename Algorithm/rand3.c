#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k;

	srand(time(0));
	rand();
	k = rand() % 100 + 1;
	if (k <= 30) {
		printf("��������̂��������I\n", k);
	}
	else {
		printf("�ʏ�U��\n", k);
	}
}
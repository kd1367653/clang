#include<stdio.h>
main()
{
	int d[11] = { 10,5,30,77,16,3,47,29,37,33,55 };
	int s, i;

	printf("�T���l�������");
	scanf("%d", &s);
	d[10] = s;
	i = 0;
	while (s != d[i]) {
		i++;
	}
	if (i == 10) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("�T���l%d���Ad[%d]�Ŕ����I\n", s, i);
	}
}
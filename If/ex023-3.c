#include<stdio.h>
main()
{
	int n1, n2, n3;
	printf("���Z�q�����:");
	scanf("%d", &n3);
	
	printf("2�̐��������:");
	scanf("%d%d", &n1, &n2);
	if (n3 == 1) {
		printf("%d", n1 + n2);
	}
	else {
		if (n3 == 2) {
			printf("%d", n1 - n2);
		}
		else {
			if (n3 == 3) {
				printf("%d", n1 * n2);
			}
			else {
				if (n3 == 4) {
					printf("%d", n1 / n2);
				}
			}
		}
	}
}
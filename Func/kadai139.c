#include<stdio.h>
void hyouji(char m, int a);
main()
{
	char m;
	int a;
	printf("•¶šH:");
	scanf("%c", &m);
	printf("®”H:");
	scanf("%d", &a);
	hyouji(m, a);
}
void hyouji(char m, int a)
{
	int i;
	for (i = 0; i < a; i++) {
		printf("%c", m);
	}
}
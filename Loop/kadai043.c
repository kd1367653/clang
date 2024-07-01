#include<stdio.h>
main()
{
	int a;
	char m;
	printf("文字コード(-1で入力終了)？");
	scanf("%d", &a);
	while (a != -1) {
		printf("%c:%d 0x\n", m, a);
	}
}
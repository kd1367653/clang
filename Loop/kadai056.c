#include<stdio.h>
main()
{
	char m;
	printf("アルファベット小文字？");
	scanf("%c", &m);
	for (m = 0; m <= 'z'; m++) {
		printf("%c ", m);
	}
}
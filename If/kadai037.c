#include<stdio.h>
main()
{
	int a;
	printf("０から１００までの整数？");
	scanf("%d", &a);
	if (a > 90) {
		printf("その数値の判定結果は「５」です");
	}
	if (80 >= a && a <= 90) {
		printf("その数値の判定結果は「４」です");
	}
	if (50 <= a && a >= 80) {
		printf("その数値の判定結果は「３」です");
	}
	if (30 >= a && a <= 50) {
		printf("その数値の判定結果は「２」です");
	}
	if (a < 30) {
		printf("その数値の判定結果は「１」です");
	}
}
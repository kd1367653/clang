#include<stdio.h>
main()
{
	int a;
	printf("‚O‚©‚ç‚P‚O‚O‚Ü‚Å‚Ì®”H");
	scanf("%d", &a);
	if (a > 90) {
		printf("‚»‚Ì”’l‚Ì”»’èŒ‹‰Ê‚Íu‚Tv‚Å‚·");
	}
	if (80 >= a && a <= 90) {
		printf("‚»‚Ì”’l‚Ì”»’èŒ‹‰Ê‚Íu‚Sv‚Å‚·");
	}
	if (50 <= a && a >= 80) {
		printf("‚»‚Ì”’l‚Ì”»’èŒ‹‰Ê‚Íu‚Rv‚Å‚·");
	}
	if (30 >= a && a <= 50) {
		printf("‚»‚Ì”’l‚Ì”»’èŒ‹‰Ê‚Íu‚Qv‚Å‚·");
	}
	if (a < 30) {
		printf("‚»‚Ì”’l‚Ì”»’èŒ‹‰Ê‚Íu‚Pv‚Å‚·");
	}
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, b, i = 0;
	srand(time(0));
	rand();
	a = rand() % 1000 + 1;
	printf("‚P`‚P‚O‚O‚O‚Ì’†‚Å‚ ‚½‚è‚Ì”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n");
	do{
		printf("“–‚½‚è‚Ì”‚ÍH->");
		scanf("%d", &b);
		if (a > b) {
			printf("“–‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·\n");
		}
		if (a < b) {
			printf("“–‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·\n");
		}
		i++;
	} while (a != b);
	printf("³‰ğ!%d‰ñ–Ú‚Å“–‚½‚è‚Ü‚µ‚½\n", i);
}
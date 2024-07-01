#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int un;

	srand(time(0));
	un = rand() % 5 + 1;
	printf("‚ ‚È‚½‚Ì‰^¨‚ÍA%d‚Å‚·", un);
	switch (un){
	case@ntf("‚Å‚·");
		break;
	case 2:printf("‚Å‚·");
		break;
	case 3:printf("‚Å‚·");
		break;
	case 4:printf("‚Å‚·");
		break;
	case 5:printf("‚Å‚·");
		break;
	}
}
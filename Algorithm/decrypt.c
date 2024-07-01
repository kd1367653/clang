#include<stdio.h>
main()
{
	int i;
	char s[11];

	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s", &s);
	i = 0;
	while (s[i] != '\0') {
		   s[i]--;
		   i++;
	}
	printf("•¡‡‰»•¶š—ñ‚ÍA%s\n", s);
}
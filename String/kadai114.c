#include<stdio.h>
main()
{
	char a[] = "kobedenshi";
	int i;
	printf("������́H");
	scanf("%s", &a[0]);
	i = 0;
	while (a[i] != '\0') {
		i++;
	}printf("������F%s  �������F%d����", a, i);
}
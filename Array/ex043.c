#include<stdio.h>
main()
{
	char str[] = "orange";
	int cnt;

	cnt = 0;
	for (cnt = 0; str[cnt] != '\0'; cnt++);
		
	
	printf("������F%s\n", &str[0]);
	printf("��������%d����\n", cnt);
}
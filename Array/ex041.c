#include<stdio.h>
main()
{
	float box[3], gokei = 0;
	int i;

	for (i = 0; i <= 2; i++) {
		printf("���������");
		scanf("%f", &box[i]);
		gokei += box[i];
			
	}
	printf("���v��%.2f�ł�\n", gokei);
	printf("���ς�%.2f�ł�\n", gokei / 3);

}
#include<stdio.h>
#include<string.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
main()
{
	struct fruit fruit1;
	strcpy(fruit1.name, "peach");
	fruit1.price = 300;
	fruit1.point = 5;
	fruit1.number = 3;
	fruit1.total = fruit1.price * fruit1.number;
	printf("���i���F%s\n", fruit1.name);
	printf("���i�F%d�~\n", fruit1.price);
	printf("�������ߓx�F\n", fruit1.point);
	for (int i = 0; i < fruit1.point; i++) {
		printf("��");
	}
	printf("\n���F%d��\n", fruit1.number);
	printf("���z�F\\%d-\n", fruit1.total);
}
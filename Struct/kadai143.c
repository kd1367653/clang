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
	printf("商品名：%s\n", fruit1.name);
	printf("価格：%d円\n", fruit1.price);
	printf("おすすめ度：\n", fruit1.point);
	for (int i = 0; i < fruit1.point; i++) {
		printf("★");
	}
	printf("\n個数：%d個\n", fruit1.number);
	printf("金額：\\%d-\n", fruit1.total);
}
#include<stdio.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile student[5];
	struct profile* p;
	int i;
	p = student;
	
	for (i = 0; i < 5; i++) {
		printf("%d人目（名前）：", i + 1);
		scanf("%s", p->name);
		printf("%d人目（生年月日）：", i + 1);
		scanf("%d%d%d", &p->birth[0]
			          , &p->birth[1]
			          , &p->birth[2]);
		printf("%d人目（血液型）：", i + 1);
		scanf("%s", p->blood);
		p++;
	}
	p = student;
	for (i = 0; i < 5; i++) {
		if (strcmp(p->blood, "A") == 0) {
			printf("%sーー%d年%d月%d日生まれ 血液型ー%s型\n",
			p->name, p->birth[0], p->birth[1], p->birth[2],
				p->blood);
		}
		p++;
	}
}
#include<stdio.h>
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day birth;
	char blood[5];
};
main()
{
	struct profile student[5] = {
		{"アーサー",{2000,1,1},"A"},
		{"ルシファー",{2001,2,2},"B"},
		{"クシナダ",{2002,1,3},"O"},
		{"ネオ",{2003,2,4},"AB"},
		{"マサムネ",{2004,2,5},"A"}
	};
	struct profile* p;
	int i;
	p = student;
	
	
	p = student;
	for (i = 0; i < 5; i++) {
		if (p-> birth.tuki == 2) {
			printf("%sーー%d年%d月%d日生まれ 血液型ー%s型\n",
			p->name, p->birth.nen, p->birth.tuki, p->birth.hi,
			p->blood);
		}
		p++;
	}
}
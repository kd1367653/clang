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
		{"�A�[�T�[",{2000,1,1},"A"},
		{"���V�t�@�[",{2001,2,2},"B"},
		{"�N�V�i�_",{2002,1,3},"O"},
		{"�l�I",{2003,2,4},"AB"},
		{"�}�T���l",{2004,2,5},"A"}
	};
	struct profile* p;
	int i;
	p = student;
	
	
	p = student;
	for (i = 0; i < 5; i++) {
		if (p-> birth.tuki == 2) {
			printf("%s�[�[%d�N%d��%d�����܂� ���t�^�[%s�^\n",
			p->name, p->birth.nen, p->birth.tuki, p->birth.hi,
			p->blood);
		}
		p++;
	}
}
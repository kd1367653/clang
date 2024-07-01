#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile pdat;
	struct profile* p;
	p = &pdat;
	printf("–¼‘O‚ð“ü—ÍF");
	scanf("%s",p->name);
	printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—ÍF");
	scanf("%d%d%d",&p->birth[0]
	              ,&p->birth[1]
	              ,&p->birth[2]);
	printf("ŒŒ‰tŒ^‚ð“ü—ÍF");
	scanf("%s",p->blood);
	printf("%s[[",p->name);
	printf("%d”N%02dŒŽ%02d“ú¶‚Ü‚ê@"
		, p->birth[0]
		, p->birth[1]
		, p->birth[2]);
	printf("ŒŒ‰tŒ^[%sŒ^\n", p->blood);
}
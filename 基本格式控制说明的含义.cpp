# include <stdio.h>

int main()
{
//==========================================
	int n;
	printf("请输入一个十进制数:");
	scanf("%d",&n);

	printf("十进制输出  %d\n",n);
	printf("八进制输出  %o\n",n);
	printf("十六进制输出  %x\n",n);
//-------------------------------------------
	printf("\n");
//-------------------------------------------
	int m;
	printf("请输入一个八进制数:");
	scanf("%o",&m);

	printf("十进制输出  %d\n",m);
	printf("八进制输出  %o\n",m);
	printf("十六进制输出  %x\n",m);
//-------------------------------------------
	printf("\n");
//-------------------------------------------
	int i;
	printf("请输入一个十六进制数:");
	scanf("%x",&i);

	printf("十进制输出  %d\n",i);
	printf("八进制输出  %o\n",i);
	printf("十六进制输出  %x\n",i);
//===========================================
	return 0;
}
# include <stdio.h>

int main()
{
	char ch[10];                //---字符串的长度为十
	int n,m;

	printf("请输入字符:");
	int i = 0;
	while((ch[i] = getchar()) != '\n')
		i++;
	ch[i] = '\0';              //---\0 是字符串的结束符
	for(n = 0, m = i - 1; n < m; n++,m--)
		if(ch[n] != ch[m])     //---判断首尾是否相等
			break;
		if(n >= m)
			printf("这是一个回文字符!\n");
		else
			printf("这不是一个回文字符!\n");

	return 0;	
}
/*
	输入一个字典（用******结尾），然后输入若干单词。
	样例输入：trap given score refund only trap work earn course pepper part
			  ******
			  resco nfudre aptr sett oresuc
	样例输出：score
			  refund
			  part tarp trap
			  :(
			  course
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int n;
char world[2000][10],sorted[2000][10];

//字符比较函数
int cmp_char(const void * _a, const void * _b)
{
	char * a = (char *)_a;
	char * b = (char *)_b;
	return *a - *b;
}

//字符串比较函数
int cmp_string(const void * _a, const void * _b)
{
	char * a = (char *)_a;
	char * b = (char *)_b;
	return strcmp(a,b);
}

int main()
{
	n = 0;
	for(;;)
	{
		scanf("%s",world[n]);
		if(world[n][0] == '*') //遇到标志就停止循坏
			break;
		n++;
	}
	
	qsort(world,n,sizeof(world[0]),cmp_string);   //给所有单词排序
	for(int i = 0; i < n; i++)
	{
		strcpy(sorted[i],world[i]);
		qsort(sorted[i],strlen(sorted[i]),sizeof(char),cmp_char);  //给每个单词排序
	}

	char s[10];

	while(scanf("%s",s) == 1)  //持续读到文件结尾
	{
		qsort(s,strlen(s),sizeof(char),cmp_char);  //给输入单词排序
		int found = 0;
		for(int i = 0; i < n; i++)
		{
			if(strcmp(sorted[i],s) == 0)
			{
				found = 1;
				printf("%s",world[i]);
			}
		}
		if( !found )
			printf(":(");
		printf("\n");
	}

	return 0;
}
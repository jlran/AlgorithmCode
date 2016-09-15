/*
描述
 
荷兰国旗有三横条块构成，自上到下的三条块颜色依次为红、白、蓝。现有若干由红、白、蓝三种颜色的条块序列，要将它们重新排列使所有相同颜色的条块在一起。本问题要求将所有红色的条块放最左边、所有白色的条块放中间、所有蓝色的条块放最右边。
输入
第1行是一个正整数n（n<100），表示有n组测试数据。接下来有n行，每行有若干个由R，W，B三种字符构成的字符串序列，其中R，W和B分别表示红、白、蓝三种颜色的条块,每行最多有1000个字符。
输出
对输入中每行上由R，W，B三种字符构成的字符串序列，将它们重新排列使所有相同颜色的条块在一起，满足前述要求。
样例输入
3
BBRRWBWRRR
RRRWWRWRB
RBRW 
样例输出
RRRRRWWBBB
RRRRRWWWB
RRWB 
*/
/*
# include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(getchar() == '\n')
		;
	if(n < 100)
	while(n--)
	{
		char ch,s[1010];
		int i = 0,count = 0,j;
		while((ch=getchar())!='\n')
		{
			if(ch=='R')
				s[i] = 1;
			else if(ch=='W')
				s[i] = 2;
			else
				s[i] = 3;
			++i;
			++count;
		}
		for(i = 0; i < count; i++)
			for(j = count - 1; j > i; j--)
			{
				if(s[j-1] > s[j])
				{
					int t = s[j-1];
					s[j-1] = s[j];
					s[j] = t;
				}
			}
			for(i = 0; i < count; i++)
			{
				if(s[i] == 1)
					ch = 'R';
				else if(s[i] == 2)
					ch = 'W';
				else
					ch = 'B';
				printf("%c",ch);
			}
		printf("\n");
	}
	return 0;
}
*/
#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
getchar();
while(n--)
{
int w=0,b=0;
char c;
while((c=getchar())!=10)
c=='R'?printf("R"):(c=='W'?w++:b++);
while(w--)
	putchar('W');
while(b--)
putchar('B');
printf("\n");
}
}
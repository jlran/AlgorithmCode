/*
描述
小蜗牛是一名ACMer,他特别想加入校ACM队，为此他开始废寝忘食的刷题。小蜗牛不是神，也会因为做不对题目而烦恼。假设小蜗牛做对一道题，他的愉悦值会加一；如果做错一题，他的愉悦值会减一。给定一个初始的愉悦值N（0<=N<=10）,当小蜗牛的愉悦值为0时他就会停止做题，转身去做其他的事情。但是他想知道自己这一天做了多少题，现在请你告诉他结果。
输入
有多组数据。
每组数据第一行给定一个N，表示小蜗牛的初始愉悦值。
第二行给定10个数字，表示有10个做题结果。
其中做题结果只会是1或者-1（1表示做对一题，-1表示做错一题）。
输出
每组数据请输出一行，输出小蜗牛做了多少题。
样例输入
2
1 1 1 1 1 -1 -1 -1 -1 -1
4
-1 -1 -1 -1 -1 1 1 1 1 1
样例输出
10
4
*/
/*
# include <stdio.h>
int main()
{
	int n,m,i = 10;
	int count = 0;
	while(scanf("%d",&n) != EOF)
	{
		if(n >= 0 && n <= 10)
			while(i--)
			{
				scanf("%d",&m);
				if(m > 0)
				{
					n++;
					count++;
				}
				else
				{
					n--;
					count++;
					if(0 == n)
					{
						break;
					}
				}
			}
			printf("%d\n",count);
			count = 0;
	}
	return 0;
}*/
 
#include<stdio.h>
int main()
{
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		int k=0;
		for(int i=0;i<10;i++)
		{
			int a;
			scanf("%d",&a);
			if(n>0)
			{
				k++;
				n+=a;
			}
		}
		printf("%d\n",k);
	}
	return 0;
}        
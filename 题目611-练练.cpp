/*
给定一个整数n，请求出0与n之间的所有偶数的和（包括0和n）？

输入
有多组数据

每种情况第一行一个整数n（0<=n<= 500)
（用EOF结尾）
输出
每行输出所有偶数的和
样例输入
3

4
样例输出
2

6
*/

# include <stdio.h>
int sum = 0;
void f(int n);

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		f(n);
	}

	return 0;
}
void f(int n)
{
	if(n == 1)
	{
		printf("%d\n",sum);
		sum = 0;
	}
	else
		if(n % 2 == 0)
		{
			sum += n;
			f(n-1);
		}
		else
			f(n-1);
}


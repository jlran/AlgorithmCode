/*
现在给你N个数（0<N<1000），现在要求你写出一个程序，找出这N个数中的所有素数，并求和。
输入
第一行给出整数M(0<M<10)代表多少组测试数据
每组测试数据第一行给你N，代表该组测试数据的数量。
接下来的N个数为要测试的数据，每个数小于1000
输出
每组测试数据结果占一行，输出给出的测试数据的所有素数和
样例输入
3
5
1 2 3 4 5
8
11 12 13 14 15 16 17 18
10
21 22 23 24 25 26 27 28 29 30
样例输出
10
41
52
*/

# include <stdio.h>
//1 不是素数
int main()
{
	int n, a, b;
	scanf("%d",&a);
	while(a--)
	{
		int sum = 0;
		scanf("%d",&b);
		while(b--)
		{
			int flage = -1;
			scanf("%d",&n);
			if(n == 1)
			{
				continue; 
			}
			else
			{
				for(int i = 2; i < n; i++)
				{
					if(n % i == 0)
					{
						flage = 1;
						break;
					}
				}
				if(flage == -1)
				{
					sum += n;
				}
			}
		}	
	printf("%d\n",sum);
	}
	return 0;
}
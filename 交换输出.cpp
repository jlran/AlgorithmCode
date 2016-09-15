/*
描述
输入n(n<100)个数，找出其中最小的数，将它与最前面的数交换后输出这些数。
(如果这个第一个数就是最小的数，则保持原样输出，如果最小的数有相同的按照前面的交换)
输入
输入数据有多组，每组占一行，每行的开始是一个整数n，表示这个测试实例的数值的个数，
跟着就是n个整数。n=0表示输入的结束，不做处理。
输出
对于每组输入数据，输出交换后的数列，每组输出占一行。
样例输入
4 2 1 3 4
5 5 4 3 2 1
0
样例输出
1 2 3 4
1 4 3 2 5
*/
# include <stdio.h>
int main()
{
	int n,i;
	int a[100];
	while(scanf("%d",&n) != EOF)
	{
		int temp,m,j;
		if(n < 100)
		{
			for(i = 0; i < n; i++)
				scanf("%d",&a[i]);
			temp = a[0];
			for(m =1; m < n; m++)
			{
				if(temp > a[m])
				{
					temp = a[m];
					j = m;
				}
			}
			if(a[0] == temp)
			{
				for(i = 0; i < n; i++)
					printf("%d ",a[i]);
			}
			else
			{
				a[j] = a[0];
				a[0] = temp;
				for(m = 0; m < n; m++)
					printf("%d ",a[m]);
			}
			printf("\n");
		}
	}
	return 0;
}
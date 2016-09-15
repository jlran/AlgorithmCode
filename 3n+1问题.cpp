/*
	对于任意大于的自然数n,若n为奇数，则将n变为3n+1，否则变为n的一半。经过若干次这样的变换，一定会使n变为1。
	例如：3->10->5->16->8->4->2->1
	输入n，输出变换的次数。{n <= 10^9}.
	样例输入：3
	样例输出：7
*/
/*
# include <stdio.h>
int main()
{
	int n;
	int count = 0;
	scanf("%d",&n);

	while( n > 1)
	{
		if(n % 2 == 1)
			n = n*3+1;
		else
			n /= 2;
		count++;
	}

	printf("%d\n",count);
	return 0;
}
*/
//竟考网上输出为 n = 987654321  count = 180
# include <stdio.h>
int main()
{
	long n;

	while(scanf("%ld",&n) != EOF)
	{
		int count = 0;
		while( n > 1)
		{
			if(n % 2 == 1)
			{
				n = (n*3+1)/2;
				count++;
			}
			else
				n /= 2;
			count++;
		}
		printf("%d\n",count % 3);
	}
	return 0;
}
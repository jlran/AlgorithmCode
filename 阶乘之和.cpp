/*
	计算S = 1! + 2! + 3! + 4!+......n!的末六位（不含前导0）。n <= 10^6.
	样例输入：10
	样例输出：37913
*/
/* 输入100时  值溢出
# include <stdio.h>

int main()
{
	int i,j,n,S = 0;
	scanf("%d",&n);

	for(i = 1; i <= n; i++)
	{
		int factorial = 1;
		for(j = 1; j <= i; j++)
			factorial *= j;
		S += factorial;
	}
	printf("%d\n",S % 1000000);

	return 0;
}
*/

# include <stdio.h>
# include <time.h>
int main()
{
	const int MOD = 1000000;
	int i,j,n,S = 0;
	scanf("%d",&n);

	for(i = 1; i <= n; i++)
	{
		int factorial = 1;
		for(j = 1; j <= i; j++)
			factorial = (factorial * j % MOD);
		S = (S + factorial) % MOD;
	}
	printf("%d\n",S);
	printf("Time used = %.2f\n",(double)clock()/CLOCKS_PER_SEC);

	return 0;
}
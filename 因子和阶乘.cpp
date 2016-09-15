/*
  样例输入：5
		    53
  样例输出：5! = 3 1 1
			53! = 49 23 12 8 4 4 3 2 2 1 1 1 1 1 1 1 
*/

# include <stdio.h>
# include <string.h>

//素数判断。注意n不能太大
int is_prime(int n)
{
	for(int i = 2;i*i <= n; i++)
		if(0 == n % i)
			return 0;
		return 1;
}

//素数表
int prime[100],count = 0;

int main()
{
	//n和各个素数的指数
	int n,p[100];

	//构造素数表
	for(int i = 2; i <= 100; i++)
		if(is_prime(i))
			prime[count++] = i;

		while(scanf("%d",&n) == 1)
		{
			printf("%d! =",n);
			memset(p,0,sizeof(p));
			int maxp = 0;
			for(int i = 1; i <= n; i++)
			{
				//必须把i复制到变量m中而不要在做除法时直接修改它
				int m = i;
				for(int j = 0; j < count; j++)
					while(0 == m % prime[j])  //反复除以prime[j],并累加p[j]
					{
						m /= prime[j];
						p[j]++;
						if(j > maxp)
							maxp = j;  //更新最大因子下标
					}
			}
			//只循坏到最大下标
			for(i = 0; i <= maxp; i++)
				printf(" %d",p[i]);
			printf("\n");
		}

	return 0;
}
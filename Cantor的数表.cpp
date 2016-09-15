/*
	1/1  1/2  1/3  1/4  1/5
	2/1  2/2  2/3  2/4
	3/1  3/2  3/3
	4/1  4/2
	5/1

  样例输入：3
			14
			7
			12345
  样例输出：2/1
			4/2
			1/4
			99/59
*/
/*
# include <stdio.h>

int main()
{
	int n;

	while(scanf("%d",&n) == 1)
	{
		int k = 1, s = 0;
		for(;;)
		{
			s += k;
			if(s >= n)  //所求项是第k条对角线的倒数s-n+1个元素
			{
				printf("%d/%d\n",k-s+n,s-n+1);
				break;
			}
			k++;
		}
	}
	return 0;
}
*/

# include <stdio.h>
# include <math.h>

int main()
{
	int n;
	while(scanf("%d",&n) == 1)
	{
		int k = (int)floor((sqrt(8.0*n+1)-1)/2-1e-9)+1;
		int s = k*(k+1)/2;
		printf("%d/%d\n",k-s+n,s-n+1);
	}
	return 0;
}
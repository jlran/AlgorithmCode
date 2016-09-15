/*
	样例输入：
	123 456
	555 555
	123 594
	0	0
	样例输出：
	0
	3
	1
*/

# include <stdio.h>

int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b) == 2)
	{
		if(!a && !b)
			return;
		int c = 0,ans =0;
		for(int i = 9; i >= 0; i--)
		{
			c = (a%10+b%10)>9 ? 1:0;
			ans += c;
			a /= 10;
			b /= 10;
		}
		printf("%d\n",ans);
	}

}
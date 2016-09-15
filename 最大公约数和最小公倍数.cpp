/*求最大公约数和最小公倍数*/
#include <stdio.h>
int main()
{
	int a,b,c,n,m;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		c = a%b;
		m = a*b;
		while(c != 0)
		{
			a = b;
			b =c;
			c = a % b;
		}
		printf("%d %d\n",b, m / b);
	}
	return 0;
}

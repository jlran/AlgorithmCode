/*
	样例输入：824 16
	样例输出：16 824
*/
/*用途更广，推荐使用
# include <stdio.h>

int main()
{
	int n,m;
	 scanf("%d%d",&n,&m);
	 int t;
	 t = n;
	 n = m;
	 m = t;

	 printf("%d %d\n",n,m);

	return 0;
}
*/
/*理解提升
# include <stdio.h>

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("%d %d\n",a,b);
	return 0;
}
*/
//解决问题
# include <stdio.h>

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);

	printf("%d %d\n",b,a);

	return 0;
}
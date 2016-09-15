# include <stdio.h>

int f(int n)
{
	int i,m = 1;
	for(i = 1; i <= n; i++)
		m *= i;
	return m;
}

int main()
{
	int m,n;
	scanf("%d%d", &n, &m);  //值过大可能会溢出
//------------------------------------------
	printf("%d\n", f(n) / (f(m) * f(n-m)));
//------------------------------------------
	return 0;
}
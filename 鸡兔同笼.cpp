/*
	已知鸡和兔的总数量为n,总腿数为m,输入n和m，依次输出鸡和兔的数量，如果无解，则输出“No answer(不要引号)”。
	样例输入：14 32
	样例输出: 12 2
	样例输入: 10 16
	样例输出：No answer
*/

# include <stdio.h>

int main()
{
	int a,b,n,m;
	int n;
	scanf("%d",&n);
	scanf("%d%d",&n,&m);
while(n--)
{
	a = (4*n-m) / 2;
	b = n - a;

	if(m % 2 == 1 || a < 0 || b < 0)
		printf("No answer\n");
	else 
		printf("%d %d\n",a,b);
}
	return 0;
}
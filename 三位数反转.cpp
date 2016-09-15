/*
	样例输入：127
	样例输出：721
*/
/*
# include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);

	printf("%d%d%d\n",n % 10, n/10%10,n/100);

	return 0;
}
*/

# include <stdio.h>

int main()
{
	int n,m;
	scanf("%d",&n);
	m = (n%10) * 100 + (n/10%10)*10 + (n/100);

	printf("%d\n",m);
	return 0;
}

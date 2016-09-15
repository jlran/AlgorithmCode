# include <stdio.h>
# define MAXN 100 + 10  //保险起见

int a[MAXN];

int main()
{
	int i, x, n = 0;
	while(scanf("%d",&x) == 1)  //输入完毕时 先按enter键 再按Ctrl+z键 最后按enter键输出
		a[n++] = x;

	for(i = n - 1; i >= 0; i--)
		printf("%d ",a[i]);
	printf("\n");
	return 0;	
}
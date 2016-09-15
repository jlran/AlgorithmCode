# include <stdio.h>

int main()
{
	int a[10];
	int n;

	printf("输入 n:");
	scanf("%d",&n);

	printf("输入%d个数",n);

	for(int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
///////////////////////////////////////
	int index = 0;
	for(i = 1; i < n; i++)
	{
		if(a[i] < a[index])
			index = i;
	}
///////////////////////////////////////
	printf("min = %d sub = %d\n",a[index],index);

	return 0;
}
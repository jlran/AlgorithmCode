# include <stdio.h>

int main()
{
	int a[10];
	int n;

	printf("���� n:");
	scanf("%d",&n);

	printf("����%d����",n);

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
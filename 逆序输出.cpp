# include <stdio.h>
# define MAXN 100 + 10  //�������

int a[MAXN];

int main()
{
	int i, x, n = 0;
	while(scanf("%d",&x) == 1)  //�������ʱ �Ȱ�enter�� �ٰ�Ctrl+z�� ���enter�����
		a[n++] = x;

	for(i = n - 1; i >= 0; i--)
		printf("%d ",a[i]);
	printf("\n");
	return 0;	
}
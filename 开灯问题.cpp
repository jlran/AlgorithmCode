/*
	��nյ�ƣ����Ϊ1--n,��һ���˰����еƴ򿪣��ڶ����˰������б��Ϊ2�ı����Ŀ��أ���Щ�ƽ����رգ�����������
	�������б��Ϊ3�ı����Ŀ��أ����йص��ĵƽ����򿪣����ŵĵƽ����رգ����������ơ�һ����k���ˣ����������Щ
	�ƿ��ţ�����n��k��������ŵĵƵı�š�k <= n <= 1000;
	�������룺7 3
	���������1 5 6 7
*/

# include <stdio.h>
# include <string.h>
# define MAXN 1000 + 10
int a[MAXN];

int main()
{
	int i, j, n, k, first = 1;
	memset(a,0,sizeof(a));        //��������
	scanf("%d%d",&n,&k);

	for(i = 1; i <= k; i++)
		for(j = 1; j <= n; j++)
		{
			if(j % i == 0)
				a[j] = !a[j];
		}

		for(i = 1; i <= n; i++)
			if(a[i])
			{
				if(first)
					first = 0;
				else
					printf(" ");
				printf("%d",i);
			}
			printf("\n");
	return 0;
}
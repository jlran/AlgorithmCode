/*
	����������ڵ���Ȼ��n,��nΪ��������n��Ϊ3n+1�������Ϊn��һ�롣�������ɴ������ı任��һ����ʹn��Ϊ1��
	���磺3->10->5->16->8->4->2->1
	����n������任�Ĵ�����{n <= 10^9}.
	�������룺3
	���������7
*/
/*
# include <stdio.h>
int main()
{
	int n;
	int count = 0;
	scanf("%d",&n);

	while( n > 1)
	{
		if(n % 2 == 1)
			n = n*3+1;
		else
			n /= 2;
		count++;
	}

	printf("%d\n",count);
	return 0;
}
*/
//�����������Ϊ n = 987654321  count = 180
# include <stdio.h>
int main()
{
	long n;

	while(scanf("%ld",&n) != EOF)
	{
		int count = 0;
		while( n > 1)
		{
			if(n % 2 == 1)
			{
				n = (n*3+1)/2;
				count++;
			}
			else
				n /= 2;
			count++;
		}
		printf("%d\n",count % 3);
	}
	return 0;
}
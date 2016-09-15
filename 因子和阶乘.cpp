/*
  �������룺5
		    53
  ���������5! = 3 1 1
			53! = 49 23 12 8 4 4 3 2 2 1 1 1 1 1 1 1 
*/

# include <stdio.h>
# include <string.h>

//�����жϡ�ע��n����̫��
int is_prime(int n)
{
	for(int i = 2;i*i <= n; i++)
		if(0 == n % i)
			return 0;
		return 1;
}

//������
int prime[100],count = 0;

int main()
{
	//n�͸���������ָ��
	int n,p[100];

	//����������
	for(int i = 2; i <= 100; i++)
		if(is_prime(i))
			prime[count++] = i;

		while(scanf("%d",&n) == 1)
		{
			printf("%d! =",n);
			memset(p,0,sizeof(p));
			int maxp = 0;
			for(int i = 1; i <= n; i++)
			{
				//�����i���Ƶ�����m�ж���Ҫ��������ʱֱ���޸���
				int m = i;
				for(int j = 0; j < count; j++)
					while(0 == m % prime[j])  //��������prime[j],���ۼ�p[j]
					{
						m /= prime[j];
						p[j]++;
						if(j > maxp)
							maxp = j;  //������������±�
					}
			}
			//ֻѭ��������±�
			for(i = 0; i <= maxp; i++)
				printf(" %d",p[i]);
			printf("\n");
		}

	return 0;
}
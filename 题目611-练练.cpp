/*
����һ������n�������0��n֮�������ż���ĺͣ�����0��n����

����
�ж�������

ÿ�������һ��һ������n��0<=n<= 500)
����EOF��β��
���
ÿ���������ż���ĺ�
��������
3

4
�������
2

6
*/

# include <stdio.h>
int sum = 0;
void f(int n);

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		f(n);
	}

	return 0;
}
void f(int n)
{
	if(n == 1)
	{
		printf("%d\n",sum);
		sum = 0;
	}
	else
		if(n % 2 == 0)
		{
			sum += n;
			f(n-1);
		}
		else
			f(n-1);
}


/*
	��֪�����õ�������Ϊn,������Ϊm,����n��m��������������õ�����������޽⣬�������No answer(��Ҫ����)����
	�������룺14 32
	�������: 12 2
	��������: 10 16
	���������No answer
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
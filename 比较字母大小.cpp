/*
����
�����������Ӣ����ĸ���Ƚ����ǵĴ�С���涨26��Ӣ����ĸA,B,C.....Z���δӴ�С��

����
��һ������T����ʾ��T�����ݣ�
��������T�У�ÿ����������ĸ���Կո������
���
����������ݵıȽϽ���������ʽ�����������
��ע������ϸ��������˳��������A B�����ʱ������A?B��
��������
3
A B
D D
Z C
�������
A>B
D=D
Z<C
*/

# include <stdio.h>
int main()
{
	int n;
	char a,b;
	scanf("%d",&n);
	if(getchar());
	while(n--)
	{
		scanf("%c %c",&a,&b);
		if(getchar());
		if((int)a < (int)b)
		{
			printf("%c>%c\n",a,b);
		}
		if((int)a > (int)b)
		{
			printf("%c<%c\n",a,b);
		}
		if((int)a == (int)b)
		{
			printf("%c=%c\n",a,b);
		}
	}
	return 0;
}
/*
����
���һ����5��������ȡ��С����������ĳ���
����
����ֻ��һ��������ݣ�Ϊ���������1���������
���
�������������һ��Ϊ��������е���Сֵ���ڶ���Ϊ��������е����ֵ�����������Կո�񿪡�
��������
1 2 3 4 5
�������
1 5
*/

# include <stdio.h>
int main()
{
	long a[6];
	long min,max;
	for(int i = 0; i < 5; i++)
		scanf("%ld",&a[i]);
	min = a[0];
	for(int j = 1; j < 5; j++)
	{
		if(a[j] < min)
			min = a[j];
	}
	max = a[0];
	for(int k = 1; k < 5; k++)
	{
		if(a[k] > max)
			max = a[k];
	}
	printf("%ld %ld\n",min,max);
	return 0;
}
/*
����
����һ���ٷ��Ƶĳɼ�M������ת���ɶ�Ӧ�ĵȼ�������ת���������£�
90~100ΪA;
80~89ΪB;
70~79ΪC;
60~69ΪD;
0~59ΪE;
����
��һ����һ������N����ʾ�������ݵ�����(N<10)
ÿ���������ռһ�У���һ������M���(0<=M<=100)��
���
����ÿ���������ݣ����һ�С�
��������
2
97
80
�������
A
B
*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a;
		scanf("%d",&a);
		if(a>=90)
			printf("A\n");
		else if(a>=80)
			printf("B\n");
		else if(a>=70)
			printf("C\n");
		else if(a >= 60)
			printf("D\n");
		else
			printf("E\n");	
	}
	return 0;
}

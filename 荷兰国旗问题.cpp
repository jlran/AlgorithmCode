/*
����
 
�����������������鹹�ɣ����ϵ��µ���������ɫ����Ϊ�졢�ס��������������ɺ졢�ס���������ɫ���������У�Ҫ��������������ʹ������ͬ��ɫ��������һ�𡣱�����Ҫ�����к�ɫ�����������ߡ����а�ɫ��������м䡢������ɫ����������ұߡ�
����
��1����һ��������n��n<100������ʾ��n��������ݡ���������n�У�ÿ�������ɸ���R��W��B�����ַ����ɵ��ַ������У�����R��W��B�ֱ��ʾ�졢�ס���������ɫ������,ÿ�������1000���ַ���
���
��������ÿ������R��W��B�����ַ����ɵ��ַ������У���������������ʹ������ͬ��ɫ��������һ������ǰ��Ҫ��
��������
3
BBRRWBWRRR
RRRWWRWRB
RBRW 
�������
RRRRRWWBBB
RRRRRWWWB
RRWB 
*/
/*
# include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(getchar() == '\n')
		;
	if(n < 100)
	while(n--)
	{
		char ch,s[1010];
		int i = 0,count = 0,j;
		while((ch=getchar())!='\n')
		{
			if(ch=='R')
				s[i] = 1;
			else if(ch=='W')
				s[i] = 2;
			else
				s[i] = 3;
			++i;
			++count;
		}
		for(i = 0; i < count; i++)
			for(j = count - 1; j > i; j--)
			{
				if(s[j-1] > s[j])
				{
					int t = s[j-1];
					s[j-1] = s[j];
					s[j] = t;
				}
			}
			for(i = 0; i < count; i++)
			{
				if(s[i] == 1)
					ch = 'R';
				else if(s[i] == 2)
					ch = 'W';
				else
					ch = 'B';
				printf("%c",ch);
			}
		printf("\n");
	}
	return 0;
}
*/
#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
getchar();
while(n--)
{
int w=0,b=0;
char c;
while((c=getchar())!=10)
c=='R'?printf("R"):(c=='W'?w++:b++);
while(w--)
	putchar('W');
while(b--)
putchar('B');
printf("\n");
}
}
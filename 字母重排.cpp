/*
	����һ���ֵ䣨��******��β����Ȼ���������ɵ��ʡ�
	�������룺trap given score refund only trap work earn course pepper part
			  ******
			  resco nfudre aptr sett oresuc
	���������score
			  refund
			  part tarp trap
			  :(
			  course
*/

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int n;
char world[2000][10],sorted[2000][10];

//�ַ��ȽϺ���
int cmp_char(const void * _a, const void * _b)
{
	char * a = (char *)_a;
	char * b = (char *)_b;
	return *a - *b;
}

//�ַ����ȽϺ���
int cmp_string(const void * _a, const void * _b)
{
	char * a = (char *)_a;
	char * b = (char *)_b;
	return strcmp(a,b);
}

int main()
{
	n = 0;
	for(;;)
	{
		scanf("%s",world[n]);
		if(world[n][0] == '*') //������־��ֹͣѭ��
			break;
		n++;
	}
	
	qsort(world,n,sizeof(world[0]),cmp_string);   //�����е�������
	for(int i = 0; i < n; i++)
	{
		strcpy(sorted[i],world[i]);
		qsort(sorted[i],strlen(sorted[i]),sizeof(char),cmp_char);  //��ÿ����������
	}

	char s[10];

	while(scanf("%s",s) == 1)  //���������ļ���β
	{
		qsort(s,strlen(s),sizeof(char),cmp_char);  //�����뵥������
		int found = 0;
		for(int i = 0; i < n; i++)
		{
			if(strcmp(sorted[i],s) == 0)
			{
				found = 1;
				printf("%s",world[i]);
			}
		}
		if( !found )
			printf(":(");
		printf("\n");
	}

	return 0;
}
# include<stdio.h>

struct student 
{
	int id;
	char name[10];
	int english;

};

int main()
{
//----------------------------------------	
	struct student ss[50],temp;
//----------------------------------------
	int n;
	printf("������ѧ������:");
	scanf("%d",&n);

	for(int i = 1; i <= n; i++)
	{
		printf("�������%dѧ����ѧ��:",i);
		scanf("%d",&ss[i].id);

		printf("����������:");
		scanf("%s",ss[i].name);

		printf("������Ӣ��ɼ�:");
		scanf("%d",&ss[i].english);
	
	}
//*************************************************
	for(i = 2; i <= n; i++)
	{
		if(ss[i].english > ss[i-1].english)
		{
		    temp = ss[i];
			ss[i] = ss[i-1];
			ss[i-1] = temp;
		}
	}
//*************************************************
	for(i = 1; i <= n; i++)
		printf("%d %s %d\n",ss[i].id,ss[i].name,ss[i].english);

	return 0;
}
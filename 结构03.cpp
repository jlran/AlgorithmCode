# include <stdio.h>
//*********************************************************
void new_students(struct students ss[]);
void search_students(struct students ss[],int id);
//*********************************************************
struct students
{
	int id;
	char name[20];
	int cj;

};

int count = 1;
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int main()
{
	int choice;
	int id;
	struct students ss[100];

	do
	{
		printf("ѡ��: 1: �½� ; 2: ��ѯ ; 0: �˳�\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1: new_students(ss);
			break;
		case 2:
			printf("������ѧ��:");
			scanf("%d",&id);
			search_students(ss,id);
			break;
		case 0:
			break;	
		}
	
	}while(choice != 0);
	return 0;
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//--------------------------------------------------------
void new_students(struct students ss[])
{
	int n;
	printf("������ѧ��������С��100�ˣ�:");
	scanf("%d",&n);

	students s;
	if(n > 100)
		printf("��������!\n");
	else
	{
		for(int i = 1; i <= n; i++)
		{
			printf("������ѧ��:");
			scanf("%d",&s.id);
			printf("����������:");
			scanf("%s",s.name);
			printf("�������ܳɼ�:");
			scanf("%d",&s.cj);
			ss[count] = s;
			count++;
		}
	}
		
}
//-------------------------------------------------------
void search_students(struct students ss[],int id)
{
	int flag = 0;
	for(int n = 1; n <= count; n++)
	{
		if(ss[n].id == id)	
		{
			flag = 1;
			break;
		}
		
	}
	if(flag = 1)
	{
		printf("ѧ��:%d\t",ss[n].id);
		printf("����:%s\t",ss[n].name);
		printf("�ܳɼ�:%d\n",ss[n].cj);
	}
	else
		printf("�������Ϣ!\n");
}
//----------------------------------------------------------
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
		printf("选择: 1: 新建 ; 2: 查询 ; 0: 退出\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1: new_students(ss);
			break;
		case 2:
			printf("请输入学号:");
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
	printf("请输入学生人数（小于100人）:");
	scanf("%d",&n);

	students s;
	if(n > 100)
		printf("人数过多!\n");
	else
	{
		for(int i = 1; i <= n; i++)
		{
			printf("请输入学号:");
			scanf("%d",&s.id);
			printf("请输入姓名:");
			scanf("%s",s.name);
			printf("请输入总成绩:");
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
		printf("学号:%d\t",ss[n].id);
		printf("名字:%s\t",ss[n].name);
		printf("总成绩:%d\n",ss[n].cj);
	}
	else
		printf("错误的信息!\n");
}
//----------------------------------------------------------
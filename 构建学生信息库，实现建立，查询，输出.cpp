# include <stdio.h>
# define MaxSize 50;
struct student
{
	int ID;
	char name[10];
	int computer,english,math;
	double average;
};

int Count = 0;
//------------------------------------------------------------------
void new_student(struct student students[]);
void search_student(struct student students[],int ID);
void output_student(struct student students[]);
//------------------------------------------------------------------
int main()
{
	int choice,ID;
	struct student students[50]; //struct student students[MaxSize];
	do
	{
		printf("choice: 1: new 2:search 3:output 0:exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:new_student(students);
			break;
		case 2:printf("������ѧ��ѧ��:");
			scanf("%d",&ID);
			search_student(students,ID);
			break;
		case 3:output_student(students);
			break;
		case 0:
			break;
		}
	
	}while(choice != 0);

	printf("����!\n");

	return 0;
}
//////////////////////////////////////////////////////////////////
void new_student(struct student students[])
{
	struct student s;
	if(Count == 50)
	{
		printf("�Ѵﵽ���!\n");
		return;
	}
	printf("������ѧ����ѧ��:");
	scanf("%d",&s.ID);
	printf("������ѧ��������:");
	scanf("%s",s.name);
	printf("������ѧ������ѧ�ɼ�:");
	scanf("%d",&s.math);
	printf("������ѧ����Ӣ��ɼ�:");
	scanf("%d",&s.english);
	printf("������ѧ���ĵ��Գɼ�:");
	scanf("%d",&s.computer);
	s.average = (float)(s.math + s.english + s.computer) / 3;
	students[Count] = s;
	Count++;

}
///////////////////////////////////////////////////////////////////
void search_student(struct student students[],int ID)
{
	int i,flag = 0;
	if(Count == 0)
	{
		printf("Count of students is zero\n");
		return;
	}
	for(i = 0; i <	Count; i++)
		if(students[i].ID == ID)
		{
			flag = 1;
			break;
		}
		if(flag == 1)
		{
			printf("ID:%d,",students[i].ID);
			printf("name:%s,",students[i].name);
			printf("math:%d,",students[i].math);
			printf("english:%d,",students[i].english);
			printf("computer:%d,",students[i].computer);
			printf("average:%.2f,",students[i].average);
		}
		else
			printf("Not found!");
}

////////////////////////////////////////////////////////////////////
void output_student(struct student students[])
{
	int i;
	if(Count == 0)
	{
		printf("Count of students is zero\n");
		return;
	}
	printf("ID\tname\tmath\tenglish\tcomputer\taverage\n");
	for(i = 0; i < Count; i++)
	{	
	    printf("%d\t",students[i].ID);
		printf("%s\t",students[i].name);
		printf("%d\t",students[i].math);
		printf("%d\t",students[i].english);
		printf("%d\t",students[i].computer);
		printf("%.2f\n",students[i].average);
	}

}

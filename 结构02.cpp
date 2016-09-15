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
	printf("请输入学生人数:");
	scanf("%d",&n);

	for(int i = 1; i <= n; i++)
	{
		printf("请输入第%d学生的学号:",i);
		scanf("%d",&ss[i].id);

		printf("请输入名字:");
		scanf("%s",ss[i].name);

		printf("请输入英语成绩:");
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
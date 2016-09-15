//动态构造学生信息的结构体数组
# include <stdio.h>
# include <malloc.h>

struct student
{
	int age;
	float score;
	char name[20];
}
int main()
{
	int len;
	struct student * parr;
	struct student t;
	
	printf("请输入学生的个数：");
	printf("len = ");
	scanf("%d",&len);
	
	parr = (struct student *)malloc(len * sizeof(struct student));
	//输入
	for(int i = 0; i < len; i++)
	{
		printf("请输入%d个学生的信息\n"，i+1);
		printf("age = ");
		scanf("%d",&parr[i].age);
		printf("name = ");
		scanf("%s",parr[i].name);
		printf("score = ");
		scanf("%f",&parr[i].score);
	}
	//排序--冒泡排序
	for(i = 0; i < len; i++)
	{
		for(int j = 0; j < len-i-1; j++)
		{
			if(parr[j].score > parr[j+1].score)
			{
				t = parr[j];
				parr[j] = parr[j+1];
				parr[j+1] = t;	
			}		
		}		
	}
	//输出
	for(i = 0; i < len; i++)
	{
		printf("%d个学生的信息:\n"，i+1);
		scanf("age = %d\n",parr[i].age);
		scanf("name = %s\n",parr[i].name);
		scanf("score = %.2f\n",parr[i].score);
	}
	
	
	return 0;
}
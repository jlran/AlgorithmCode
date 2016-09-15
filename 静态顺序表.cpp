# include <stdio.h>
# define MaxSize 10
//静态顺序表的各种操作
//向顺序表中插入元素
//参数Sqlist:表首地址
//参数*len:表长度
//参数i:插入元素的位置
//参数x：待插入的元素值

void insertElem(int Sqlist[], int *len, int i, int x)
{
	int t;
	if(*len == MaxSize || i < 1 || i > *len +1)
	{
		printf("This insert is illegal:\n");
		return;
	}  //非法插入
	for( t = *len; t > i-1; t--)
	{
		Sqlist[t] = Sqlist[t-1];
	}
	Sqlist[i-1] = x;	//插入元素
	*len = *len + 1;	//表长加1
}

//向顺序表中删除元素
//参数Sqlist:表首地址
//参数*len:表的长度
//参数i:插入元素的位置

void DelElem(int Sqlist[],int *len, int i)
{
	int j;
	if(i < 1 || i > *len)
	{
		printf("This insert is illegal");
		return;
	}	//非法插入
	for(j = i; j <= *len-1; j++)	
	{
		Sqlist[j-1] = Sqlist[j];	//将第i个元素之后的元素前移
	}
	*len = *len - 1;	//表长减一
}

//测试函数

int main()
{
	int Sqlist[MaxSize];	//定义一个静态顺序表
	int len;
	int i;
	for(i = 0; i < 6; i++)
	{
		scanf("%d",&Sqlist[i]);	//从键盘输入六个整数
	}
	len = 6;
	for(i = 0; i < len; i++)
		printf("%d ",Sqlist[i]);	//输出顺序表中的六个整数

	printf("\nThe space length is %d\n",MaxSize - len);	//显示表中剩余的空间
//----------------------------------------------------------
	insertElem(Sqlist,&len,3,0);	//在表中的第三个位置插入0
	for(i = 0; i < len; i++)
		printf("%d ",Sqlist[i]);	//输出表中的所有元素
	printf("\nThe space length is %d\n",MaxSize - len);
//-----------------------------------------------------------
	insertElem(Sqlist,&len,11,0);
	DelElem(Sqlist,&len,6);		//删除顺序表中的第六个元素
	for(i = 0; i < len; i++)
		printf("%d ",Sqlist[i]);	//输出表中的所有元素
	printf("\nThe space length is %d\n",MaxSize - len);	//显示表中剩余的空间
//----------------------------------------------------------
	return 0;
}
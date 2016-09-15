//跨函数使用内存
# include <stdio.h>

void f(int **q) //q指针变量 无论q是什么类型的指针变量 都只占四个内存
{
	int i = 5;
	*q = &i;
	
}

int main()
{
	int *p;
	f(&p);
	printf("%d\n",*p); //本语句没有错 但是逻辑上有问题
	
	
	return 0;
}
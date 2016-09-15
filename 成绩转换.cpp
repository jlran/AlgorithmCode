/*
描述
输入一个百分制的成绩M，将其转换成对应的等级，具体转换规则如下：
90~100为A;
80~89为B;
70~79为C;
60~69为D;
0~59为E;
输入
第一行是一个整数N，表示测试数据的组数(N<10)
每组测试数据占一行，由一个整数M组成(0<=M<=100)。
输出
对于每组输入数据，输出一行。
样例输入
2
97
80
样例输出
A
B
*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a;
		scanf("%d",&a);
		if(a>=90)
			printf("A\n");
		else if(a>=80)
			printf("B\n");
		else if(a>=70)
			printf("C\n");
		else if(a >= 60)
			printf("D\n");
		else
			printf("E\n");	
	}
	return 0;
}

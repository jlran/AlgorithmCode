//茵茵的第一课
/*
	描述
茵茵今年已经六年级了，爸爸给她报了一个学习程序设计的班。

第一节课上，老师讲的就是如何输入一个数，再原样输出出来。

以现在的你看来，挺容易的是不？
那么，就请你也写出一个一样的程序吧

输入
第一行是一个整数N(N<10)表示测试数据的组数）
接下来的n行 每行只有一个数（可能是小数，也可能是整数）
这个数的位数（整数位数+小数位数）不超过19位
输出
原样输出每个数，每输出占一行
样例输入
2
3.5
5
样例输出
3.5
5
*/
/*
#include <stdio.h>
#include <string.h>

int main()
{
	int i,cnt;
	char str[10][20],num[20]="\0";
	scanf("%d",&cnt);
	for (i=0;i<=cnt;i++)
	{
		gets(num);
		strcpy(str[i],num);
		puts(str[i]);
	}

	return 0;
}
*/

#include<stdio.h>

#include<string.h>

int main()
{
int n;
char a[20];
scanf("%d",&n);
while(n--)
{
scanf("%s",a);
printf("%s\n",a);
}
return 0;
}

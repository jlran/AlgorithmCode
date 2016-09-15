/*
描述
设计一个从5个整数中取最小数和最大数的程序
输入
输入只有一组测试数据，为五个不大于1万的正整数
输出
输出两个数，第一个为这五个数中的最小值，第二个为这五个数中的最大值，两个数字以空格格开。
样例输入
1 2 3 4 5
样例输出
1 5
*/

# include <stdio.h>
int main()
{
	long a[6];
	long min,max;
	for(int i = 0; i < 5; i++)
		scanf("%ld",&a[i]);
	min = a[0];
	for(int j = 1; j < 5; j++)
	{
		if(a[j] < min)
			min = a[j];
	}
	max = a[0];
	for(int k = 1; k < 5; k++)
	{
		if(a[k] > max)
			max = a[k];
	}
	printf("%ld %ld\n",min,max);
	return 0;
}
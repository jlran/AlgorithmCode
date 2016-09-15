/*
描述
子晓最近在玩无主之地1，他对这个游戏的评价不错，结合了FPS与RPG元素，
可玩度很高。不过，他发现了一代的任务系统做的不好，任务系统并没有帮
他统计清楚哪个区域有多少任务，而且，给任务的时候呢，也比较散乱。比
如，在1区域的一个任务点，你领到了4个任务；2区域的一个任务点，你领到
了3个任务；游戏一段时间后，你又在1区域另一个任务点个领到了3任务（之前任务没有完成）
，3区域领到了9个任务……他感觉很凌乱，现在他要设计一个程序来统计每个区域有多少个任务。
输入
多组测试数据，以输入0 0结束
每组数据占一行,输入m区域，n个任务（0<m,n<100）
输出
输出各个区域的统计结果（不要求排序）
样例输入
1 3
2 3
3 4
1 7
0 0
样例输出
1 10
2 3
3 4
*/

# include <stdio.h>

struct FPS
{
	int a[100];
	int count[100];
};

int main()
{
	struct FPS fps;
	int i,m;
	int co = 0;
	while(scanf("%d %d",&i,&m) && i != 0 && m != 0)
	{
		int flage = 1;
		for(int n = 0; n < co; i++)
		{
			if(fps.a[n] == i)
			{
				fps.count[m] = m + fps.count[m];
				flage = -1;
				break;
			}
		}
		if(flage == 1)
		{
			fps.a[co] = i;
			fps.count[co] = m;
		}
		co++;

	}
	for(i = 0; i < co; i++)
	{
		printf("%d %d\n",fps.a[i],fps.count[i]);
	}

	return 0;
}
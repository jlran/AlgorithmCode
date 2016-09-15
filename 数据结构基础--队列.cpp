/*
	卡片游戏
	桌子上有一叠牌，从第一张牌（即位于顶面的牌）开始从上往下依次编号为1~n。
	当至少还剩两张牌时进行以下操作：把第一张牌扔掉，然后把新的第一张放到
	整叠牌的最后。输入n，输出每次扔掉的牌，以及最后剩下的牌。
	样例输入：7
	样例输出：1 3 5 7 4 2 6
*/
//尽管运行结果没错，但这个程序其实是有bug的。应使用循坏队列
/*
# include <stdio.h>
const int MAXN = 50;
int queue[MAXN];

int main()
{
	int n,front,rear;
	scanf("%d",&n);

	for(int i = 0; i < n; i++)
		queue[i] = i+1;	//初始化队列
	front = 0;	//队首元素的位置
	rear = n;	//队尾元素后一个元素位置

	while(front < rear)		//当队列非空
	{
		printf("%d ",queue[front++]);		//输出并抛弃队首元素
		queue[rear++] = queue[front++];	//队首元素转移到队尾
	}
	printf("\n");
	return 0;
}
*/
//C++提供了一种更加简单的处理方式---STL队列
/*	竟考网运行没错 C++
# include <stdio.h>
# include <queue>
using namespace std;

queue<int> q;
int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
		q.push(i+1);  //初始化队列
	while(!q.empty())	//当队列非空
	{
		printf("%d ",q.front());	//打印队首元素
		q.pop();	//抛弃队首元素
		q.push(q.front());		//把队首元素加入队尾
		q.pop();
	}
	
	return 0;
}
*/

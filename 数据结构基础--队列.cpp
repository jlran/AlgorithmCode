/*
	��Ƭ��Ϸ
	��������һ���ƣ��ӵ�һ���ƣ���λ�ڶ�����ƣ���ʼ�����������α��Ϊ1~n��
	�����ٻ�ʣ������ʱ�������²������ѵ�һ�����ӵ���Ȼ����µĵ�һ�ŷŵ�
	�����Ƶ��������n�����ÿ���ӵ����ƣ��Լ����ʣ�µ��ơ�
	�������룺7
	���������1 3 5 7 4 2 6
*/
//�������н��û�������������ʵ����bug�ġ�Ӧʹ��ѭ������
/*
# include <stdio.h>
const int MAXN = 50;
int queue[MAXN];

int main()
{
	int n,front,rear;
	scanf("%d",&n);

	for(int i = 0; i < n; i++)
		queue[i] = i+1;	//��ʼ������
	front = 0;	//����Ԫ�ص�λ��
	rear = n;	//��βԪ�غ�һ��Ԫ��λ��

	while(front < rear)		//�����зǿ�
	{
		printf("%d ",queue[front++]);		//�������������Ԫ��
		queue[rear++] = queue[front++];	//����Ԫ��ת�Ƶ���β
	}
	printf("\n");
	return 0;
}
*/
//C++�ṩ��һ�ָ��Ӽ򵥵Ĵ���ʽ---STL����
/*	����������û�� C++
# include <stdio.h>
# include <queue>
using namespace std;

queue<int> q;
int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
		q.push(i+1);  //��ʼ������
	while(!q.empty())	//�����зǿ�
	{
		printf("%d ",q.front());	//��ӡ����Ԫ��
		q.pop();	//��������Ԫ��
		q.push(q.front());		//�Ѷ���Ԫ�ؼ����β
		q.pop();
	}
	
	return 0;
}
*/

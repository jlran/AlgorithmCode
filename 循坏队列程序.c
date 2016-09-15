# include <stdio.h>

typedef struct Queue
{
	int  *pBase;
	int front;
	int rear;
}QUEUE;

void init(QUEUE *);    //初始化
bool en_queue(QUEUE *,int val);  //入队
void traverse_queue(QUEUE *);   //遍历
bool out_queue(QUEUE *, int * pVal);  //出队
bool full_queue(QUEUE *);
bool empty_queue(QUEUE *pQ)

int main()
{
	int val;  //出队的元素
	QUEUE Q;
	
	init(&Q);
	en_queue(&Q,1);
	
	traverse_queue(&Q);
	out_queue(&Q,&val);
	traverse_queue(&Q);
	
	
	
	return 0;
}

void init(QUEUE *pQ)
{
	pQ->pBase = (int *)malloc(sizeof(int)*6);
	pQ->front = 0;
	pQ->rear = 0;
}

bool full_queue(QUEUE *pQ)
{
	if((pQ-rear + 1)%6 == pQ->front)
		return true;
	else
		return false;
}

bool en_queue(QUEUE *pQ,int val)
{
	if(full_queue(pQ))
	{
		return false;
	}
	else
	{
		pQ->pBase[pQ->rear] = val;
		pQ->rear = (pQ->rear + 1) % 6;
		
		return true;
	}
}

void traverse_queue(QUEUE *pQ)
{
	int i = pQ->front;
	while(i != pQ-rear)
	{
		printf("%de",pQ-pBase[i]);
		i = (i + 1)%6;
	}
	return;
}
bool empty_queue(QUEUE *pQ)
{
	if(pQ->front == pQ->rear)
		return true;
	else
		return false;
}
bool out_queue(QUEUE *pQ, int * pVal)
{
	if(empty_queue(pQ))
		return false;
	else
	{
		*pVal = pQ->pBase[pQ->front];
		pQ->front = (pQ->front + 1) % 6;
		return true;
	}
	
}
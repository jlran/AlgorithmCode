# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node * pNext;	
}NODE, * PNODE;

typedef struct Stack
{
	PNODE pTop;
	PNODE pBottom;
}STACK, * PSTACK;

void init(PSTACK);
void push(PSTACK,int);
void traverse(PSTACK);
bool pop(PSTACK pS, int * pVal);
void clear(PSTACK pS);

int main()
{
	int val;
	STACK S;
	
	init(&s);      //创立一个空栈
	push(&s,1);
	push(&s,2);
	traverse(&s);  //遍历输出
	clear(&S);	   //清空
	pop(&s,&val);  //出栈
	
	return 0;
}

void init(PSTACK pS)
{
	pS->pTop = (PNODE)malloc(sizeof(NODE));
	if(NULL == pS->pTop)
	{
		printf("动态内存分配失败！\n");
		exit(-1);	
	}
	else
	{
		pS->pBottom = pS->pTop;
		pS->pTop->pNext = NULL;
	}
}
void push(PSTACK pS,int val)
{
	PNODE pNew = (PNODE)malloc(sizeof(NODE));
	pNew->data = val;
	pNew->pNext = pS->pTop;
	pS->pTop = pNew;
	return;
}
void traverse(PSTACK pS)
{
	PNODE p = pS->pTop;
	
	while(p != pS->pBottom)
	{
		printf("%d",p->data);
		p = p->pNext;
	}
	printf("\n");
	return;
}
bppl empty(PSTACK pS)
{
	if(pS->pTop == pS ->pBottom)
		return true;
	else
		return false;
}
bool pop(PSTACK pS, int * pVal)
{
	if( empty(pS))
	{
		return false;
	}
	else
	{
		PNODE r = pS->pTop;
		*pVal = r->data;
		pS->pTop = r->pNext;
		free(r);
		r = NULL;
		
		return true;
	}
}

//清空
void clear(PSTACK pS)
{
	if(empty(pS))
	{
		return;
	}
	else
	{
		PNODE p = pS->pTop;
		PNODE q = NULL;
		
		while(p != pS-pBottom)
		{
			q = p->pNext;
			free(p);
			p = q;
		}
		pS->pTop = pS-pBottom;
	}
	
}
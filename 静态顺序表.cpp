# include <stdio.h>
# define MaxSize 10
//��̬˳���ĸ��ֲ���
//��˳����в���Ԫ��
//����Sqlist:���׵�ַ
//����*len:����
//����i:����Ԫ�ص�λ��
//����x���������Ԫ��ֵ

void insertElem(int Sqlist[], int *len, int i, int x)
{
	int t;
	if(*len == MaxSize || i < 1 || i > *len +1)
	{
		printf("This insert is illegal:\n");
		return;
	}  //�Ƿ�����
	for( t = *len; t > i-1; t--)
	{
		Sqlist[t] = Sqlist[t-1];
	}
	Sqlist[i-1] = x;	//����Ԫ��
	*len = *len + 1;	//����1
}

//��˳�����ɾ��Ԫ��
//����Sqlist:���׵�ַ
//����*len:��ĳ���
//����i:����Ԫ�ص�λ��

void DelElem(int Sqlist[],int *len, int i)
{
	int j;
	if(i < 1 || i > *len)
	{
		printf("This insert is illegal");
		return;
	}	//�Ƿ�����
	for(j = i; j <= *len-1; j++)	
	{
		Sqlist[j-1] = Sqlist[j];	//����i��Ԫ��֮���Ԫ��ǰ��
	}
	*len = *len - 1;	//����һ
}

//���Ժ���

int main()
{
	int Sqlist[MaxSize];	//����һ����̬˳���
	int len;
	int i;
	for(i = 0; i < 6; i++)
	{
		scanf("%d",&Sqlist[i]);	//�Ӽ���������������
	}
	len = 6;
	for(i = 0; i < len; i++)
		printf("%d ",Sqlist[i]);	//���˳����е���������

	printf("\nThe space length is %d\n",MaxSize - len);	//��ʾ����ʣ��Ŀռ�
//----------------------------------------------------------
	insertElem(Sqlist,&len,3,0);	//�ڱ��еĵ�����λ�ò���0
	for(i = 0; i < len; i++)
		printf("%d ",Sqlist[i]);	//������е�����Ԫ��
	printf("\nThe space length is %d\n",MaxSize - len);
//-----------------------------------------------------------
	insertElem(Sqlist,&len,11,0);
	DelElem(Sqlist,&len,6);		//ɾ��˳����еĵ�����Ԫ��
	for(i = 0; i < len; i++)
		printf("%d ",Sqlist[i]);	//������е�����Ԫ��
	printf("\nThe space length is %d\n",MaxSize - len);	//��ʾ����ʣ��Ŀռ�
//----------------------------------------------------------
	return 0;
}
/*96
����
��֪w��һ������10��������1000000���޷�����������w��n(n��2)λ�������������w�ĺ�n-1λ������

����
��һ��ΪM����ʾ��������������
������M�У�ÿ�а���һ���������ݡ�
���
���M�У�ÿ��Ϊ��Ӧ�е�n-1λ��������ǰ׺0��������������λ�⣬����λ��Ϊ0�������0��
��������
4
1023
5923
923
1000
�������
23
923
23
0
*/
/*# include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		int i = 0;
		unsigned char a[1000010];
		while((a[i] = getchar()) != '\n')
		{
			i++;
		}
		if(i >= 2)
		{
			for(int b = 1; b < i; b++)
			{
				if(b == i-1 && a[b] == '0')
					printf("%c",a[b]);
				if(a[b] == '0')
					;
				else 
				{
					printf("%c",a[b]);
				}
			}		
		}
		printf("\n");
	}
	return 0;
}*/
# include <stdio.h>
int main()  
{  
    int n,a;  
    scanf("%d",&n);  
    while(n--)  
    {  
        scanf("\n%*c%d",&a); //%*c��ʾ,����һ���ַ�,��������ַ������浽�������\n�����ջس���  
        printf("%d\n",a);  
    } 
	return 0;
}  
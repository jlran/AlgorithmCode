/*96
描述
已知w是一个大于10但不大于1000000的无符号整数，若w是n(n≥2)位的整数，则求出w的后n-1位的数。

输入
第一行为M，表示测试数据组数。
接下来M行，每行包含一个测试数据。
输出
输出M行，每行为对应行的n-1位数（忽略前缀0）。如果除了最高位外，其余位都为0，则输出0。
样例输入
4
1023
5923
923
1000
样例输出
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
        scanf("\n%*c%d",&a); //%*c表示,读入一个字符,但是这个字符不保存到变量里，用\n来吸收回车符  
        printf("%d\n",a);  
    } 
	return 0;
}  
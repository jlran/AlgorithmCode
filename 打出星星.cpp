# include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);

	//*�������1  ������
	for(int i = 1; i <= n; i++)
	{
		for(int j =1; j <= n; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	/*�������2 
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	*/
	

	/*�������3
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n-i; j++)
			printf(" ");
		for(int j = 1; j <=i; j++)
			printf("*");
		printf("\n");
	}
		*/
	
	/*/
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n-i; j++)
			printf(" ");
		for(int j = 1; j <= 2*i-1; j++)
			printf("*");
		printf("\n");
	}
	*/

	return 0;
}

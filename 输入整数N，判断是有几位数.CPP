# include<stdio.h>

int main()
{

	int count = 0;

	printf("请输入整数:");
	while(getchar() != '\n')	
		count++;

	printf("一共有%d位数!\n",count);

	return 0;
}
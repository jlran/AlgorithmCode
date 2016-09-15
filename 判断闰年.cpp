# include <stdio.h>

int main()
{
	int i;
	scanf("%d",&i);

		if(((i%4==0)&&(i%100!=0))||(i%400==0))
	{
		printf("是闰年\n");
	}
	else
		printf("不是闰年\n");

	return 0;
}

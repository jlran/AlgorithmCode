
# include <stdio.h>

int main()
{
	int n;
	char ch_lower,ch_upper;

	printf("请输入六个小写字母:");
	for(n = 1; n <= 6; n++)
	{
		scanf("%c",&ch_lower);
		if(ch_lower >= 'a' && ch_lower <= 'z')
			ch_upper = ch_lower - 'a' + 'A'; 
		                                    // ---把小写字母转化成大写字母---ch - 'a' + 'A'
		printf("%c -> %c -> %d\n",ch_lower,ch_upper,ch_upper % 10);

	}
/*
	printf("请输入六个大写字母:");

	for(n = 1; n <= 6; n++)
	{
		scanf("%c",&ch_lower);
		if(ch_lower >= 'A' && ch_lower <= 'Z')
			ch_upper = ch_lower - 'A' + 'a'; 
		                                    // ---把大写字母转化成小写字母---ch - 'A' + 'a'
		printf("%c -> %c -> %d\n",ch_lower,ch_upper,ch_upper % 10);
	}
*/
	return 0;
}
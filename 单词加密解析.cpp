
# include <stdio.h>

int main()
{
	int n;
	char ch_lower,ch_upper;

	printf("����������Сд��ĸ:");
	for(n = 1; n <= 6; n++)
	{
		scanf("%c",&ch_lower);
		if(ch_lower >= 'a' && ch_lower <= 'z')
			ch_upper = ch_lower - 'a' + 'A'; 
		                                    // ---��Сд��ĸת���ɴ�д��ĸ---ch - 'a' + 'A'
		printf("%c -> %c -> %d\n",ch_lower,ch_upper,ch_upper % 10);

	}
/*
	printf("������������д��ĸ:");

	for(n = 1; n <= 6; n++)
	{
		scanf("%c",&ch_lower);
		if(ch_lower >= 'A' && ch_lower <= 'Z')
			ch_upper = ch_lower - 'A' + 'a'; 
		                                    // ---�Ѵ�д��ĸת����Сд��ĸ---ch - 'A' + 'a'
		printf("%c -> %c -> %d\n",ch_lower,ch_upper,ch_upper % 10);
	}
*/
	return 0;
}
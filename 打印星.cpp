# include <stdio.h>

int main()
{
//----------------------------
	int i,n;
	for(i = 4; i >= 0; i--)
	{
		for(n = 1; n <= i; n++)
			printf("*");
		printf("\n");
	}
/*----------------------------
	printf("****\n");
	printf("***\n");
	printf("**\n");
	printf("*\n");
------------------------------
*/

	return 0;
}
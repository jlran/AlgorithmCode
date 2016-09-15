/*
	样例输入：hohoho
	样例输出：2
*/
# include <stdio.h>
# include <string.h>

int main()
{
	char world[100];
	scanf("%s",world);

	int len = strlen(world);

	for(int i = 1; i <= len; i++)
		if(len % i == 0)
		{
			int ok = 1;
			for(int j = i; j < len; j++)
				if(world[j] != world[j % i])
				{
					ok = 0;
					break;
				}
				if(ok)
				{
					printf("%d\n",i);
					break;
				}
		}

	return 0;
}
# include<stdio.h>
# include <string.h>
int num[2000],count;
int next(int x);

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int j = 0;
	scanf("%d",&num[0]);
	count = 1;
	for(;;)
	{
		num[count] = next(num[count - 1]);   
		j++;
		int found = 0;   
		for(int i = 0; i < count; i++)
			if(num[i] == num[count])
			{
				found = 1;
				break;
			}

			if(found)
				break;
			count++;
	}
	
	printf("%d\n",j);
	}

	return 0;
}

int next(int x)
{
	int a,b,n;
	char s[10];

	sprintf(s,"%d",x);	 
	n = strlen(s);

	for(int i =0; i < n; i++)
		for(int j = i +1; j <n; j++)
		{
			if(s[i] > s[j])
			{
				char t = s[i];
				s[i] = s[j];
				s[j] = t;
			}
		}
		sscanf(s,"%d",&b);

		for(i = 0; i < n/2; i++) 
		{
			char t = s[i];
			s[i] = s[n - 1 -i];
			s[n - 1 -i] = t;
		}
		sscanf(s,"%d",&a);

		return a - b;
}

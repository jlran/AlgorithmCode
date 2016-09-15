# include <stdio.h>

int shui(int *n, int &count)  
{
	for(int i = 100; i < 1000; i++)
	{
		int a = (i/100);
		int b = (i%10);
		int c = (i/10)%10;

		int m = a*a*a+b*b*b+c*c*c;

		if(i == m)
		{
			n[count] = i;
			count++;
		}
	}
	if(count == 0)
		return -1;
	return 0;
}

int main()
{
     int count= 0;
	int n[100];
       shui(n,count);                         
        for(int j = 0; j < count; j++ )
        {
            printf("%d " ,n[j]);
        }
	return 0;
}

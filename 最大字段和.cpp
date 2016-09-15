#include <stdio.h>
//最大子段和 
int max(int *a, int len){
	int sum = 0, temp = 0;
	for(int i = 0; i < len; i++)
	{
		temp = 0;
		for(int j = i; j < len; j++)
		{
			temp += a[j];
			if(temp > sum)
			{
				sum = temp;
			}
		}		
	}
	return sum;
}

int max(int *a, int len)
{
	int sum = 0, temp = 0;
	for(int i = 0; i < len; i++)
	{
		if(temp > 0)
		{
			temp += a[i];
		}else{
			temp = a[i];
		}
		
		if(temp > sum)
			sum = temp;
	}
	return sum;
}

int main()
{
	
	return 0;
}


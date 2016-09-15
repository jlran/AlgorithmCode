# include <stdio.h>
void QuickSort(int *a,int low,int high);
int FindPos(int *a,int low,int high)；

int main()
{
	int a[6] = {2,1,0,5,4,3};
	QuickSort(a,0,5);
	
	for(i = 0; i < 6; i++)
	{
		printf("%d",a[i]);
	}
	
	return 0;
}

void QuickSort(int *a,int low,int high)
{
	int pos;
	
	if(low < high)
	{
		pos = FindPos(a,low,high);
		QuickSort(a.low,pos-1);
		QuickSort(a,pos+1,high);
	}
	else
	{
		
	}
}

int FindPos(int *a,int low,int high)
{
	int val = a[low];
	while (low < high)
	{
		while(low < high && a[high] >= val)
			--high;
		a[low] = a[high];
		while(low < high && a[low] <= val)
			++low;
		a[high] = a[low];
	}//终止时low和high相等
	a[low] = val;
	
	return high;
}
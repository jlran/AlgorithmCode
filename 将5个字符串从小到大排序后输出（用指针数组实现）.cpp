# include "stdio.h"                       //c++   iostream.h
# include "string.h"

/*
int main()
{
	int i;
	char *pcolor[5] = {"red","blue","yellow","green","black"};

	void fsort(char *color[], int n);

	fsort(pcolor,5);

	for(i = 0; i < 5; i++)
		printf("%s\n",pcolor[i]);

	return 0;
}

void fsort(char *color[], int n)
{
	int k,j;
	char *temp;

	for(k = 1; k < n; k++)
	{
		for(j = 0; j < n - k; j++)
			if(strcmp(color[j],color[j+1]) > 0)
			{
				temp = color[j];
				color[j] = color[j + 1];
				color[j + 1] = temp;
			}
	}
}
*/

int main()
{
	int i;
	int a[5] = {6,5,2,8,1};

	void fsort(int a[], int n);

	fsort(a,5);

	for(i = 0; i < 5; i++)
		printf("%d\n",a[i]);		//c++  cout<<a[i]<<endl;

	return 0;
}

void fsort(int a[], int n)
{
	int k,j;
	int temp;

	for(k = 1; k < n; k++)
		for(j = 0; j < n - k; j++)
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
}
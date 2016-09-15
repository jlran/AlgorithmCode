# include <stdio.h>
# include <malloc.h>

void f(int **q)
{
	*q = (int *)malloc(sizeof(int));
	**q = 5;
	
}

int main()
{
	int *p;
	f(&p);	
	printf("%d\n",*p);
	return 0;
}
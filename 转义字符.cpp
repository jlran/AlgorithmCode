# include <stdio.h>

int main()
{
	printf("%2d \n %d",9,9);  
	                        //---换行
	printf("\n");
	printf("%d \t %d",9,9); 
	                        //---横向跳格
	printf("\n");
	printf("%d \\ %d",9,9); 
	                        //---/是error
	printf("\n");
	printf("%d \" %d",9,9);  
	                        //---"是error
	printf("\n");
	printf("%d \' %d",9,9);   
	                        //---'是true 
	printf("\n");

	return 0;
}
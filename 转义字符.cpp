# include <stdio.h>

int main()
{
	printf("%2d \n %d",9,9);  
	                        //---����
	printf("\n");
	printf("%d \t %d",9,9); 
	                        //---��������
	printf("\n");
	printf("%d \\ %d",9,9); 
	                        //---/��error
	printf("\n");
	printf("%d \" %d",9,9);  
	                        //---"��error
	printf("\n");
	printf("%d \' %d",9,9);   
	                        //---'��true 
	printf("\n");

	return 0;
}
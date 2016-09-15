# include <stdio.h>
# include <string.h>

int main()
{
	int i;
	char *color[5] = {"red","blue","yellow","green","black"};
	char **pc;				//定义二级指针
	char str[20];

	pc = color;				//二级指针赋值
	printf("Input a color:");
	scanf("%s",str);
	
	for(i = 0; i < 5; i++)
		if(strcmp(str,*(pc+i)) == 0)	//比较颜色是否相同
			break;

		if(i < 5)
			printf("position:%d\n",i+1);
		else
			printf("Not Found\n");

	return 0;
}
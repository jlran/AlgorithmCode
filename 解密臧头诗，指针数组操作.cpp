# include <stdio.h>

char *change(char s[][20]);

int main()
{
	int i;
	char *poem[4] = {"一叶轻舟向东流，","帆梢轻握杨柳手，","风纤碧波微起舞，","顺水任从雅客悠。"}; //指针数组初始化
	char mean[10];

	for(i = 0; i < 4; i++)  //每行取第一个汉字存入mean
	{
		mean[2*i] = *(poem[i]);
		mean[2*i+1] = *(poem[i]+1);
	}

	mean[2*i] = '\0';
	printf("%s\n",mean);	//输出结果

	return 0;
}

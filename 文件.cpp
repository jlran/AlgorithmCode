# include <stdio.h>
# include <stdlib.h>
int main()
{
	FILE *fp;
	long num;
	char name[10];
	int score;

	fp = fopen("00.txt","r");

	if(fp == NULL)
	{
		printf("�򿪴���");
		exit(0);
	}

	for(int i = 0; i < 4; i++)
	{
		fscanf(fp,"%ld%s%d",&num,name,&score);
		printf("%ld\t%s\t%d\n",num,name,score);
	}

	if(fclose(fp))
	{
		printf("�ر��ļ���");
		exit(0);
	}
	return 0;

}
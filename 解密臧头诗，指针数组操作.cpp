# include <stdio.h>

char *change(char s[][20]);

int main()
{
	int i;
	char *poem[4] = {"һҶ����������","�������������֣�","���˱̲�΢���裬","˳ˮ�δ��ſ��ơ�"}; //ָ�������ʼ��
	char mean[10];

	for(i = 0; i < 4; i++)  //ÿ��ȡ��һ�����ִ���mean
	{
		mean[2*i] = *(poem[i]);
		mean[2*i+1] = *(poem[i]+1);
	}

	mean[2*i] = '\0';
	printf("%s\n",mean);	//������

	return 0;
}

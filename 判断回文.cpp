# include <stdio.h>

int main()
{
	char ch[10];                //---�ַ����ĳ���Ϊʮ
	int n,m;

	printf("�������ַ�:");
	int i = 0;
	while((ch[i] = getchar()) != '\n')
		i++;
	ch[i] = '\0';              //---\0 ���ַ����Ľ�����
	for(n = 0, m = i - 1; n < m; n++,m--)
		if(ch[n] != ch[m])     //---�ж���β�Ƿ����
			break;
		if(n >= m)
			printf("����һ�������ַ�!\n");
		else
			printf("�ⲻ��һ�������ַ�!\n");

	return 0;	
}
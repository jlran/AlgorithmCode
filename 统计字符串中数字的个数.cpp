# include <stdio.h>

int main()
{
	int i,count;
	char ch[80];

	printf("�������ַ���:");
	i = 0;

	while ((ch[i] = getchar()) != '\n')
		i++;
	ch[i] = '\0';           //---�������� '\0' ��������

	count = 0;
//-----------------------------------------
	for(i = 0; ch[i] != '\0'; i++)
		if(ch[i] >= '0' && ch[i] <= '9')
			count++;
//-----------------------------------------
		printf("%d\n",count);
	
	return 0;
}
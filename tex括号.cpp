//�������룺"To be or not to be,"quoth the Bard,"that is the question".
//�����������To be or not to be,��quoth the Bard,'��that is the question��.

# include <stdio.h>

int main()
{
	int c,q = 1;

	while((c = getchar()) != EOF)
	{
		if(c == '"')
		{
			printf("%s",q?"��":"��");
			q = !q;
		}
		else
			printf("%c",c);
	}

	return 0;
}
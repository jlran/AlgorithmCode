//样例输入：OS,GOMR YPFSU/
//样例输出：IAMFINE TODAY.

# include <stdio.h>

int main()
{
	char *s = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	int c;

	while((c = getchar()) != EOF)
	{
		for(int i = 1; s[i] && s[i] != c; i++)
			;
		if(s[i])   //  0 != s[i]
			putchar(s[i-1]);
		else
			putchar(c);
	}

	return 0;
}
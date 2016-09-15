/*
描述
we define f(A) = 1, f(a) = -1, f(B) = 2, f(b) = -2, ... f(Z) = 26, f(z) = -26;
Give you a letter x and a number y , you should output the result of y+f(x).
输入
On the first line, contains a number T(0<T<=10000).then T lines follow, each line is a case.each case contains a letter x and a number y(0<=y<1000).
输出
for each case, you should the result of y+f(x) on a line
样例输入
6
R 1
P 2
G 3
r 1
p 2
g 3
样例输出
19
18
10
-17
-14
-4
*/

# include<stdio.h>
int main()
{
	char a[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char b[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int i,q;
		char s;
		if(q == getchar()=='\n');
		scanf("%c%d",&s,&i);
		for(int j = 0; j < 26; j++)
		{
			if(a[j] == s)
			{
				printf("%d\n",j+1+i);
			}
			if(b[j] == s)
			{
				printf("%d\n",-(j+1)+i);
			}
		}

	}
	return 0;
}
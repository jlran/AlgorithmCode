/*
描述 198
我们平时数数都是喜欢从左向右数的，但是我们的小白同学最近听说德国人数数和我们有些不同，他们正好和我们相反，是从右向左数的。因此当他看到123时会说“321”。

现在有一位德国来的教授在郑州大学进行关于ACM的讲座。现在他聘请你来担任他的助理，他给你一些资料让你找到这些资料在书中的页数。现在你已经找到了对应的页码，要用英文把页码告诉他。

为了简化我们的问题，你只需要返回单词的大写的首字母。（数字0读成字母O）

注意：每个数字式单独读取的，因此不会出现11读成double one的情况。

输入
输入分两部分：
第一部分：一个整数T(1<=T<=1000)
第二部分：一共T行，每行为一个数字。每个数的长度不超过10位。
输出
每组输出单独占一行，输出对应的返回给德国教授的页码缩写。
样例输入
2
12
1234
样例输出
TO
FTTO
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	char num[10] = {'O', 'O', 'T', 'T', 'F', 'F', 'S', 'S', 'E', 'N'};
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int i;
        scanf("%s",str);
        for(i = strlen(str) - 1; i >= 0; i--)	//得到字符串长度strlen()
        {
            printf("%c",num[str[i]-'0']);	//得到数字num[str[i] - '0']
        }
        printf("\n");
    }
    return 0;
}
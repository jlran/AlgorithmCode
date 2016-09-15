/*
描述
请寻找并输出1至1000000之间的数m，它满足m、m^2和m^3均为回文数。回文数大家都知道吧，就是各位数字左右对称的整数，例如121、676、123321等。满足上述条件的数如m=11，m^2=121,m^3=1331皆为回文数。
输入
没有输入
输出
输出1至1000000之间满足要求的全部回文数，每两个数之间用空格隔开，每行输出五个数
*/

# include <stdio.h>
int isHuiWenNumber(long long num)
{
    long long sum=0,temp=num;
    while(num)
    {
        sum=sum*10+num%10;
        num/=10;
    }
    if(temp==sum)
        return 1;
    else
        return 0;
}
int main()
{
    int count = 0;
    for(long long i=1; i<=1000000; ++i)
    {
        long long b=i*i;
        long long c = b*i;
        if(isHuiWenNumber(i) && isHuiWenNumber(b) && isHuiWenNumber(c))
        {
            count++;
            printf("%d",i);
            if(count < 5)
                printf(" ");
            else
            {
                count = 0;
                printf("\n");
            }
        }
    }
  printf("\n");
    return 0;
}
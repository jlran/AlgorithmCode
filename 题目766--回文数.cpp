/*
����
��Ѱ�Ҳ����1��1000000֮�����m��������m��m^2��m^3��Ϊ����������������Ҷ�֪���ɣ����Ǹ�λ�������ҶԳƵ�����������121��676��123321�ȡ�������������������m=11��m^2=121,m^3=1331��Ϊ��������
����
û������
���
���1��1000000֮������Ҫ���ȫ����������ÿ������֮���ÿո������ÿ����������
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
/*
描述
给你一个乱序的字符串,里面包含有小写字母(a--z)以及一些特殊符号，请你找出所给字符串里面所有的小写字母的个数， 拿这个数对26取余，输出取余后的数字在子母表中对应的小写字母(0对应z,1对应a，2对应b....25对应y)。
输入
第一行是一个整数n(1<n<1000)表示接下来有n行的字符串m(1<m<200)需要输入
输出
输出对应的小写字母 每个小写字母单独占一行
样例输入
2
asdasl+%$^&ksdhkjhjksd
adklf&(%^(alkha
样例输出
q
j
*/

 
#include <stdio.h>   
#include <string.h>   
int main()  
{  
    int n;char a[200];  
    scanf("%d",&n);  
    while(n--)  
    {   int l=0;  
        scanf("%s", a);   
        for(int i=0;i<strlen(a);i++)  
        {  
            if(a[i]>='a'&&a[i]<='z')  
            {  
                l++;  
            }  
        }  
        l=l%26;  
        if(l==0){  
            printf("z\n");  
        }  
        else{  
            printf("%c\n",l+96);  
        }  
    }         
    return 0;  
}  
        
/*
����
���ڸ�����һЩ����Ҫ����д��һ�����������Щ����������������������������೤�ȡ���������еȾ��볤�����������������ֵ����Ӧ���롣
�����������������������������������������������0
����
��һ�и���������������N(0<N<=10000)
��������N��ÿ����һ������M(0<M<1000000)��
���
ÿ������������� A B.
����A��ʾ����Ӧ�������������������B��ʾ���ľ��롣
��������
3
6
8
10
�������
5 1
7 1
11 1
*/
/*
# include <stdio.h>
int ssleft(int high);
int ssright(int low);

int main()
{
	long N,M;
	long num1,num2;
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d",&M);
		num1 = ssright(M);
		num2 = ssleft(M);
		if((num1 - M) > (M - num2))
		{
			printf("%d %d\n",num2,M-num2);
		}
		else
			if((num1 - M) == (M - num2))
			{
				printf("%d %d\n",num2,M-num2);
			}
			else
			{
				printf("%d %d\n",num1,num1-M);
			}
	}
	return 0;
}

int ssleft(int high)
{
	long num2;
	int flage;
	for(int j = high; j > 0; j--)
	{
		for(int i = 2; i <= j / 2 ; i++)
		{
			flage = -1;
			if(j % i == 0)
			{
				flage = 1;
				break;
			}
		}
		if(flage != 1)
		{
			num2 = j;
			break;
		}
	}
	return num2;
}
int ssright(int low)
{
	long num1;
	int flage;
	for(int j = low;; j++)
	{
		for(int i = 2; i <= low / 2 ; i++)
		{
			flage = -1;
			if(j % i == 0)
			{
				flage = 1;
				break;
			}
		}
		if(flage != 1)
		{
			num1 = j;
			break;
		}
	}
	return num1;
}//ʱ�䳬ʱ*/

#include <stdio.h>
#include <math.h>

int ss(int a)                   
{
 int i, k = 0;
 for (i = 2; i < sqrt(a+1); i++)
 {
  if (a % i == 0)
  {
   k = 1;
   break;
  }
 }
 if (k == 1)
     return 0;
 else
     return 1;
}
int main()
{
 int n, m, i;
 scanf("%d", &n);
 while (n--)
 {
  scanf ("%d", &m);
  for (i = 0;i <= m;i++)
  {
     if (m == 1)
     {
        printf ("2 1\n");
        break;
     }
     if (ss(m - i))
     {
        printf ("%d %d\n", m-i, i);
        break;
     } 
     if (ss(m + i))
     {
        printf ("%d %d\n", m+i, i);
        break;
     } 
  } 
 }
 return 0;
}       

/*����ʱ���
#include<stdio.h>
#include<math.h>
int gg(int x)
{
if(x<=1)
return 0;
if(x==2)
return 1;
int i,j=sqrt(x);
for(i=2;i<=j;i++)
if(x%i==0)
break;
if(i>j)
return 1;
return 0;
}
int main()
{
int N;
scanf("%d",&N);
while(N--)
{
int n;
scanf("%d",&n);
if(gg(n))
printf("%d 0\n",n);
else
{
int m=n,d=n;
while(1)
{
if(gg(--m))
{
printf("%d %d\n",m,n-m);
break;
}
else if(gg(++d))
{
printf("%d %d\n",d,d-n);
break;
}
}
}
}
return 0;
}
*/
/*���Ŵ���
#include<iostream>
02.
#include<cmath>
03.
using namespace std;
04.
 
05.
bool isprime(int n)
06.
{
07.
for(int k=2;k<=sqrt((double)n);k++)
08.
if((n%k)==0)
09.
return false;
10.
return true;
11.
}
12.
int main()
13.
{
14.
int n;
15.
cin>>n;
16.
while(n--)
17.
{
18.
int num,i,j;       
19.
cin>>num;
20.
if(num==1)
21.
{
22.
cout<<"2 1"<<endl;
23.
continue;
24.
}
25.
for(i=num;!isprime(i);i--);
26.
for(j=num;!isprime(j);j++);
27.
 
28.
if((num-i)<(j-num))
29.
cout<<i<<' '<<(num-i)<<endl;
30.
else if((num-i)>(j-num))
31.
cout<<j<<' '<<(j-num)<<endl;
32.
else if((num-i)==(j-num))
33.
cout<<i<<' '<<(num-i)<<endl;
34.
}
35.
}
*/
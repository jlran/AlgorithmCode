/*
某城市有一个火车站，铁轨铺设如图6-1所示。有n节车厢从A方向驶入车站，按进站顺序编号为1~n。你的任务是让它们按照某种特定的顺序进入B方向的铁轨并驶出车站。为了重组车厢，你可以借助中转站C。这是一个可以停放任意多节车厢的车站，但由于末端封顶，驶入C的车厢必须按照相反的顺序驶出C。对于每个车厢，一旦从A移入C，就不能再回到A了；一旦从C移入B就不能再回到C了。换句话说，在任意时刻，只有两种选择：A->C和C->B
样例输入：
5
1 2 3 4 5
5 
5 4 1 2 3
6
654321
样例输出：
Yes
No
Yes


分析：
在中转站C中。车厢符合后进先出的原则，成为LIFO表，即栈，实现栈只需要一个数组stack和栈顶指针（始终指向栈顶元素）为了方便起见，这里使用的数组下标均从1开始。例如，target[1]是指目标序列中第一个车厢的编号，而stack[1]是栈底元素，这样，栈空当且仅当top=0.(否则，如果以0下标作为栈底元素起始下标，当top=0时栈仍然不为空)
实现：
*/
/*
#include<stdio.h>  
const int MAXN =1000+10;  
int n,target[MAXN];  
int stack[MAXN];  
  
int main(){  
    while(scanf("%d",&n)==1)
	{  
        int top=0;	//top=0表示栈为空，在检测中要把其放在稍微后面一些匹配结束  
        int A=1,B=1;	//两个数组存放数据的初始下标   
        //输入目标数据局   
        for(int i=1;i<=n;i++)
		{  
            scanf("%d",&target[i]);  
        }  
        //检验是否能够实现  
        int ok=1;  
        while(B<n)
		{			//当目标数组中未全部取出配对时，循环  
            if(A==target[B])
			{
				A++;B++;
			}		//放入一个就立刻取出的情况   
            else if(top && stack[top]==target[B])
			{
				top--;
				B++;
			}  
            else 
			if
				(A<=n)
			{
				stack[++top]=A++;
			}	//如果上面一条不符合，就说明不出栈，继续进栈   
            else 
			{
				ok=0;
				break;
			}	//如果某次循环居然执行到这里，说明无法匹配，置为否，并跳出循环   
        }     
        printf("%s\n",ok?"YES":"NO");  
    }  
    return 0;   
}   
*/

//（用STL栈来实现）

#include<stdio.h>   
#include<stack>			//使用到栈   
using namespace std;  
  
const int MAXN =1000+10;  
  
int n,target[MAXN];  
  
int main(){  
    while(scanf("%d",&n)==1)
	{  
        stack<int> s;  
        int A=1,B=1;  
        for(int i=1;i<=n;i++)  
            scanf("%d",&target[i]);  
        int ok=1;  
        while(B<=n)
		{  
            if(A==target[B])
			{
				A++;
				B++;
			}  
            else if(!s.empty() && s.top()==target[B])
			{
				s.pop();
				B++;
			}  
            //如果不满足上一条的话，就把数据往栈里面加   
            else 
				if(A<=n) 
					s.push(A++);  
            else
			{
				ok=0;
				break;
			}		//如果上述都不符合，说明不能匹配，则置标志位为0，并且直接跳出循环   
        }  
        printf("%s\n",ok?"YES":"NO");
    }   
	return 0;
}  

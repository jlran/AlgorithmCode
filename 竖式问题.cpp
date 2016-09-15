/*
	找出所有形如abc*de(三位数乘以两位数)的算式，使得在完整的竖式中，所有数字
	都属于一个特定的数字集合。输入数字集合（相邻数字之间没有空格），输出所有
	竖式。每个竖式前应有编号，之后应有一个空行。最后输出解的总数。
	样例输入：2357
	样例输出：
<1>
  775
X  33
-----
 2325
2325 
-----
25575

The number of solutions = 1
*/

# include <stdio.h>
# include <string.h>
int main()
{
	int i, ok, abc, de, x, y, z, count = 0;
	char s[20],buf[99];
	scanf("%s",s);
	
	for(abc = 111; abc <= 999; abc++)
		for(de = 11; de <= 99; de++)
		{
			x = abc*(de%10);
			y = abc*(de/10);
			z = abc*de;
			sprintf(buf,"%d%d%d%d%d",abc,de,x,y,z); 
												//sprintf说明
												//#include<stdio.h>
 
												//int　main()													/*主函数“整数”类型*/
												//{
													//char　buffer[50];											/*“字符”类型的数组，下面共有50个元素。*/
													//int　n,a=5,b=3;											/*三个变量都为“整数”类型,intn中间要有空格*/
													//n=sprintf(buffer,"%d plus %d is %d",a,b,a+b);				/*赋予数值*/
													//printf("[%s]is a string %d chars long\n",buffer,n);		/*“格式输出函数”*/
													//return　0;												/*“返回零”
																												//也就是程序正常退出*/
												//}
											    //输出结果：
												//[5 plus 3 is 8] is a string 9 chars long

			ok = 1;
			for(i = 0; i < strlen(buf); i++)
				if(strchr(s,buf[i]) == NULL)  /*
											  strchr()
												说明：返回首次出现c的位置的指针，返回的地址是字符串在内存中随机分配的
												      地址再加上你所搜索的字符在字符串位置，如果s中不存在c则返回NULL。
												返回值：成功则返回要查找字符第一次出现的位置，失败返回NULL
											  */
					ok = 0;
				if(ok)
				{
					printf("<%d>\n",++count);
					printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n",abc,de,x,y,z);
				}
		}
		printf("The number of solutions = %d\n",count);

	return 0;
}
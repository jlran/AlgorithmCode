//枚举

# include <stdio.h>
//只定义了一个数据类型，并没有定义变量，该数据类型名字是enum weekday
enum weekday
{
	monday,tuesday,wednesday,thuruday......
};

int main()
{
	enum weekday day = monday;

	printf("%d",day); 	//输出为0
	
	return 0;
}
//把一个事物所有可能的取值一一列举出来
//更直观  代码更安全 书写麻烦 
//了解枚举就可以了
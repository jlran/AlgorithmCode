/*输入一个以回车符结束的字符串（不少于80个字符），过滤去所有的非
  十六进制字符后，组成一个新字符串（十六进制形式），输出该字符串
  并将其转换为十进制数后输出
*/

# include <stdio.h>

int main()
{
	char str1[80],str2[80];
	int i,k;
	long number;

	printf("请输入字符串:");
	i = 0;
	
	while((str1[i] = getchar()) != '\n')
		i++;
	str1[i] = '\0';
//----------------------------------------------------------------------------------------------------------------------
	k = 0;
	for(i = 0; str1[i] != '\0'; i++)
		if
			(str1[i] >= '0' && str1[i] <= '9' || str1[i] >= 'a' && str1[i] <= 'f' || str1[i] >= 'A' && str1[i] <= 'F')
		{
			str2[k] = str1[i];
			k++;
		}
	str2[k] = '\0';
	for(i =0; str2[i] != '\0'; i++)
		putchar(str2[i]);
//-----------------------------------------------------------------------------------------------------------------------
	number = 0;                                                  //---------十六进制转换十进制
	for(i = 0; str2[i] != '\0'; i++)
		if(str2[i] >= '0' && str2[i] <= '9')
			number = number * 16 + str2[i] - '0';
		else
			if(str2[i] >= 'a' && str2[i] <= 'f')
				number = number * 16 + str2[i] - 'a' +10;
			else
				if(str2[i] >= 'A' && str2[i] <=	'F')
					number = number * 16 + str2[i] - 'A' + 10;
//-----------------------------------------------------------------------------------------------------------------------
				printf("\n");
				printf("%d\n",number);

	return 0;
}

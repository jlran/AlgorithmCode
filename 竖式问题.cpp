/*
	�ҳ���������abc*de(��λ��������λ��)����ʽ��ʹ������������ʽ�У���������
	������һ���ض������ּ��ϡ��������ּ��ϣ���������֮��û�пո񣩣��������
	��ʽ��ÿ����ʽǰӦ�б�ţ�֮��Ӧ��һ�����С����������������
	�������룺2357
	���������
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
												//sprintf˵��
												//#include<stdio.h>
 
												//int��main()													/*������������������*/
												//{
													//char��buffer[50];											/*���ַ������͵����飬���湲��50��Ԫ�ء�*/
													//int��n,a=5,b=3;											/*����������Ϊ������������,intn�м�Ҫ�пո�*/
													//n=sprintf(buffer,"%d plus %d is %d",a,b,a+b);				/*������ֵ*/
													//printf("[%s]is a string %d chars long\n",buffer,n);		/*����ʽ���������*/
													//return��0;												/*�������㡱
																												//Ҳ���ǳ��������˳�*/
												//}
											    //��������
												//[5 plus 3 is 8] is a string 9 chars long

			ok = 1;
			for(i = 0; i < strlen(buf); i++)
				if(strchr(s,buf[i]) == NULL)  /*
											  strchr()
												˵���������״γ���c��λ�õ�ָ�룬���صĵ�ַ���ַ������ڴ�����������
												      ��ַ�ټ��������������ַ����ַ���λ�ã����s�в�����c�򷵻�NULL��
												����ֵ���ɹ��򷵻�Ҫ�����ַ���һ�γ��ֵ�λ�ã�ʧ�ܷ���NULL
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
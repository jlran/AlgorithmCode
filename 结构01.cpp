# include <stdio.h>
//*****************************************
struct qwe
{
	int age;
	int qw;
};
//******************************************
struct student
{
	struct qwe q;
	char name[10];
};
//******************************************

int main()
{
	struct student s;
	scanf("%d %d %s",&s.q.age,&s.q.qw,s.name);
	
	printf("%d %d %s\n",s.q.age,s.q.qw,s.name);

	return 0;
}
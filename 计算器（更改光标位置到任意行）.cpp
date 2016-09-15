# include <stdio.h>
# include <windows.h>

void gotoxy(int x, int y)
{
    COORD cd = {x, y};   
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cd);
}
void show()
{
	int sum = 0;
	for(int i =1; i < 10; i++)
	{
		printf("\t\t%d  ",i);
		sum++;
		if(sum == 3)
		{
			sum = 0;
			printf("\n");
		}
	}
	printf("\t\t\t\t0   \n");
}
void wait()
{
	getchar();
	getchar();
}
int main()
{
	while(1)
	{
		printf("\t\t\t  计算器仿真界面");
		printf("\n\n\n\n");
		show();
		gotoxy(15,1);
		int x;
		scanf("%d",&x);
		gotoxy(45,2);
		printf("%d",x);
		wait();
		system("cls");
	}
	return 0;
}



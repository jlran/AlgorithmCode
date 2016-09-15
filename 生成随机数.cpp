#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
 int r;
 srand(time(NULL));
 r=rand()%9999+0000;
 printf("%d",r);

 return 0;

}
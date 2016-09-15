链表也是线性表的一种，与顺序表不同的是，它在内存中不是连续存放的。在C语言中，链表是通过指针相关实现的。而单链表是链表的其中一种，关于单链表就是其节点中有数据域和只有一个指向下个节点的指针域。创建单链表的方法有两种，分别是头插法和尾插法。
所谓头插法，就是按节点的逆序方法逐渐将结点插入到链表的头部。反之尾插法就是按节点的顺序逐渐将节点插入到链表的尾部。相对来说，头插法要比尾插法算法简单，但是最后产生的链表是逆序的，即第一个输入的节点实际是链表的最后一个节点。而为了习惯，通常用尾插法来创建链表。下面的代码就是实现了头插法和尾插法。代码在Linux下调试通过。
[cpp] view plaincopyprint?
#include <stdio.h>  
#include <stdlib.h>  
  
typedef struct link  
{  
    char data;  
    struct link *next;  
}linklist;  
  
linklist *CreateList_Front();   //头插法创建单链表  
linklist *CreateList_End();     //尾插法创建单链表  
void ShowLinklist(linklist *h); //输出显示链表  
  
int main(void)  
{  
    int choice;  
    linklist *head;  
  
    //head = (linklist*)malloc(sizeof(linklist));  
    while(1)  
    {  
        printf("单链表的创建\n");  
        printf("1.使用头插法创建单链表\n");  
        printf("2.使用尾插法创建单链表\n");  
        printf("3.链表输出显示\n");  
        printf("4.退出\n");  
        printf("做出选择：\n");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
        //头插法  
        case 1:  
            head = CreateList_Front();  
            break;  
        //尾插法  
        case 2:  
            head = CreateList_End();  
            break;  
        //输出链表  
        case 3:  
            ShowLinklist(head);  
            break;  
        //退出程序  
        case 4:  
            return 0;  
            break;  
        default:  
            break;  
        }  
    }  
    return 1;  
}  
  
linklist *CreateList_Front()  
{  
    linklist *head, *p;  
    char ch;  
  
    head = NULL;  
    printf("依次输入字符数据(‘#’表示输入结束):\n");  
    ch = getchar();  
    while(ch != '#')  
    {  
        p = (linklist*)malloc(sizeof(linklist));  
        p->data = ch;  
        p->next = head;  
        head = p;  
        ch = getchar();             //头插法算法简单 核心就两句p->next = head;head = p;  
    }  
    return head;  
}  
  
linklist *CreateList_End()  
{  
    linklist *head, *p, *e;  
    char ch;  
  
    head = NULL;  
    e = NULL;  
    printf("请依次输入字符数据('#'表示输入结束):\n");  
    ch = getchar();  
    while(ch != '#')  
    {  
        p = (linklist*)malloc(sizeof(linklist));  
        p->data = ch;  
        if(head == NULL)        //先判断输入的是不是第一个节点  
        {  
            head = p;             
        }  
        else  
        {  
            e->next = p;     //e始终指向输入的最后一个节点  
        }  
        e = p;  
        ch = getchar();           
    }  
    if(e != NULL)               //如果链表不为空，则最后节点的下一个节点为空  
    {  
        e->next = NULL;  
    }  
    return head;                //尾插法比头插法复杂一些，程序中要做两次判断，分别是判断第一个节点和最后一个节点的判断。且消耗多一个指针变量e。  
}  
  
void ShowLinklist(linklist *h)  
{  
    linklist *p;  
  
    p = h;  
    while(p != NULL)  
    {  
        printf("%c ", p->data);  
        p = p->next;  
    }  
    printf("\n");  
}  

通过上述代码可以看出，尾插法确实比头插法复杂点，多了两个判断。但是这是可以解决的，通过添加一个头节点，此节点不存放数据域，只是存放指向下个节点的指针域就是了。这样就可以免除掉两次判断。整体也要清晰点了。下面是增加一个头节点后尾插法的实现代码：
[cpp] view plaincopyprint?
#include <stdio.h>  
#include <stdlib.h>  
  
typedef struct list  
{  
    char data;  
    struct list *next;  
}linklist;  
  
linklist *CreateList_End();     //尾插法创建链表  
void ShowLinklist(linklist *h); //输出显示链表  
  
int main(void)  
{  
    linklist *head;  
  
    printf("使用尾插法创建链表(改进版)\n");  
    printf("请依次输入字符数据(‘#’表示输入结束):\n");  
    head = CreateList_End();        //创建链表  
    ShowLinklist(head);             //输出链表  
}  
  
linklist *CreateList_End()  
{  
    linklist *head, *p, *e;  
    char ch;  
  
    head = (linklist*)malloc(sizeof(linklist));  
    e = head;           //让e指向头节点  
    ch = getchar();  
    while(ch != '#')  
    {  
        p = (linklist*)malloc(sizeof(linklist));  
        p->data = ch;   
        e->next = p;     //把新节点添加到表尾  
        e = p;              //把指针指向新节点  
        ch = getchar();  
    }     
    e->next = NULL;          //尾节点的指针域置空  
    return head;  
}  
  
void ShowLinklist(linklist *h)  
{  
    linklist *p;  
  
    p = h->next;  
    while(p != NULL)  
    {  
        printf("%c ", p->data);  
        p = p->next;  
    }  
    printf("\n");  
}  
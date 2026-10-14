#include <stdio.h>
void exchange(int *p1,int *p2);
int main()
{
    int a,b;
    printf("请输入两个整数（用空格分隔）: ");
    scanf("%d %d", &a, &b);
    int *p1=&a;
    int *p2=&b;
    printf("交换前:%d %d\n",*p1,*p2);
    exchange(p1,p2);
    printf("交换后:%d %d\n",*p1,*p2);
    return 0;
}
void exchange(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
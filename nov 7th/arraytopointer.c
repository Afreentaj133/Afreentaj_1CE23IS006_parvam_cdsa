#include<stdio.h>
int main()
{
    int a[10]={5,6,4,5,8,5,2,1,3,7},*p=a;
    for(int i=0;i<10;printf("%d\n",(a+i++)));
    printf("after loop:%d\n",*a);
    return 0;
}
#include<stdio.h>
int main()
{
    int no=0,s=0,t=0;
    scanf("%i",&no);
    t=no;
    s=(t%10)*(t%10)*(t%10);
    t/=10;
    s+=(t%10)*(t%10)*(t%10);
    t/=10;
    s+=(t%10)*(t%10)*(t%10);
    if(s==no)
    printf("%d is a armstrong number\n",no);
    else
    printf("%d is not armstrong number\n",no);
    return 0;
}
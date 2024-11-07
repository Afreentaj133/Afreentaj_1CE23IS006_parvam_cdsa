#include<stdio.h>
int sod(int);
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("sum of digits of %d is %d ",n,sod);
    return 0;
}
int sod()
{
    if(n<=0)return 0;
    if(n<=1)return 1;
    printf("n%10")*sod(n/10);
}




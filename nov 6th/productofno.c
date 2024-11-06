#include<stdio.h>
int main()
{
    int a=0,b=-99;
    long r=0;
    scanf("%d%i",&a,&b);
    for(;b>0;r+=a,b--);
    printf("product = %ld",r);
    return 0;

}
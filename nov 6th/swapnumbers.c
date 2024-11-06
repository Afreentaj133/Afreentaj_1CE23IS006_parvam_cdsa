#include<stdio.h>
int main()
{
    int m=10,n=20;
    scanf("%d%i",&m,&n);
    printf("before swap m=%d n=%i,m,n");
    m=m^n;
    n=m^n;
    m=m^n;
    printf("after swap m=%d n=%i,m,n");
    return 0;
}
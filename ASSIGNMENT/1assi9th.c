// array reversal
#include<stdio.h>
int main()
{
    int n=0,a[1000],i=0;
    scanf("%d",&n);
    for(i=0;i<n;scanf("%i",&a[i++]));

    for( i=0;i<=n/2;i++)
    {
        a[i]=a[i]^a[n-1-i];
        a[n-1-i]=a[i]^a[n-1-i];
        a[i]=a[i]^a[n-1-i];
    }
    for(int i=0;i<n;printf("\n%d",a[i++]));

    return 0;
}

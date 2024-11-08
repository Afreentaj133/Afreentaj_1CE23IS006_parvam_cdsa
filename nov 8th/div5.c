#include<stdio.h>
int main()
{
    int n=0,a[100],i=0;
    scanf("%d",&n);
    for(i=0;i<n;scanf("%d",&a[i++]));

    for(i=0;i<n;i++){
        if(n%i==0)
            printf("%d",n);
        
    }
    return 0;
}
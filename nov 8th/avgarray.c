#include<stdio.h>
int main()
{
    int n=0,i=0,sum=0;
    double avg=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter array element:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("%lf",avg);
    return 0;
}

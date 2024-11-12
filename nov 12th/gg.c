#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,a[1000];
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    a[i]=a[i]^a[num-1-i];
    a[num-1-i]=a[i]^a[num-1-i];
    a[i]=a[i]^a[num-1-i];

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
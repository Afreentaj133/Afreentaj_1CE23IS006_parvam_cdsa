#include<stdio.h>
int power (int base,int exponent) {
    if(exponent==0){
        return 1;
    }
    else {
        return  base*power(base,exponent-1);
    }
}
int main(){

    int base,exponent;
    scanf("%d%i",&base,&exponent);
    int result=power(base,exponent);
    printf("%d raused power of %d is %d\n",base,exponent,result);
    return 0;
}


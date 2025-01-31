#include<stdio.h>

int main(){

    unsigned int a,b;
    scanf("%u",&a);

    b = a & (-a);
    printf("%u",b);


    return 0;
}
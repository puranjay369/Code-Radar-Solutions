#include<stdio.h>

void main(){

    unsigned int a;
    scanf("%u",&a);

    a = a & (-a);
    printf("%u",a)

    

}
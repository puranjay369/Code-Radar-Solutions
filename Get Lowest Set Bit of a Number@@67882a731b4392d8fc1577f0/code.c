#include<stdio.h>

void main(){

    unsigned int a;
    scanf("%u",&a);

    return a & (-a);
    

}
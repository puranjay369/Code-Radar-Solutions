#include<stdio.h>

int main(){

    unsigned int a;
    scanf("%u",&a);

    a = (a & (-a));
    printf("%u",a);


    return 0;
}
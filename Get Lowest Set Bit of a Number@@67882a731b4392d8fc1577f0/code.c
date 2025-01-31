#include <stdio.h>

int main(){

   unsigned int a;
    scanf("%d",&a);

    a = a & (-a);
    printf("%d",a);

    return 0;
}
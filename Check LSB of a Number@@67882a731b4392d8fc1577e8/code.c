#include <stdio.h>

int main(){

    int a;
    scanf("%d",&a);

    if(a & 1){
        print("Set");
    }
    else{
        print("False");
    }

    return 0;
}
#include <stdio.h>
#include<ctype.h>

int main(){

    char a;
    scanf("%c",&a);

    if(a == 'a' || a == 'e' || a == 'i' || a == 'O' || a == 'u'){
        printf("Vowel");
    }
    else if(isdigit(a)){
        printf("Digit");
    }


    return 0;
}
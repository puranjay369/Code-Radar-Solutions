#include <stdio.h>
#include<ctype.h>

int main(){

    char a;
    scanf("%c",&a);

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        printf("Vowel");
    }
    else if(isdigit(a)){
        printf("Digit");
    }


    return 0;
}
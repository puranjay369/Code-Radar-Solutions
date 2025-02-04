#include <stdio.h>
#include<ctype.h>

int main(){

    char a;
    scanf("%c",&a);

    if(a = toupper(a)){
        printf("Uppercase");
    }
    else if(a = tolower(a)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }



    return 0;
}

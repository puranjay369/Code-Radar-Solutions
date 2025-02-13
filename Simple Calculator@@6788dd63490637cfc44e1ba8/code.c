#include <stdio.h>

int main(){

    int i,n;
    
    scanf("%d\n",&n);
    for(i=0;i<n+1;i++){

        if(i%2==0){
            printf("%d\n",i);
           
        }
        else{
            printf("print a valid no.");
        }
        
        
    }


    return 0;
}
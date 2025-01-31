#include<stdio.h>

unsigned int getlowestsetbit(unsigned int a){

    return a & (-a);
}


int main(){

    unsigned int a;
    scanf("%u",&a);

    unsigned int lowestsetbit = getlowestsetbit(a);
    printf("%u\n",lowestsetbit); 
    
    return 0;

}
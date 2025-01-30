#include <stdio.h>

int main(){

    double radius;
    double area;

    scanf("%lf",&radius);

    area = 3.14*radius*radius;
    printf("Area: %.2lf",area);



    return 0;
}
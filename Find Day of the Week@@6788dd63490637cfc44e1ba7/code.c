#include <stdio.h>


    int main(){

        //switch= a more effective alternative to using many "else if" statements
        //        allows a value to be tested for equality against many cases

        int grade;

        printf("enter your grade: ");
        scanf("%d",&grade);

        switch (grade)
        {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;        
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
         case 7:
            printf("Sunday");
            break;    
        default:
            
            
        }


        return 0;
    }
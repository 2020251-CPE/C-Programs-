/* ASSIGNMENT
Made by: Recio, Angelo Rafeal F.
08/09/2021
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x; //Grade Input

    printf("\nEnter Your Grade : "); //Input Grade Here
    scanf("%d" ,&x);
    
   switch(x) {
        
        case 1 ... 74: //If grade < 75
            printf("Your GPA is 5.00");
            break;
        case 75: //If grade = 75
            printf("Your GPA is 3.00");
            break;
        case 76 ... 78 : //If 79>grade>75
            printf("Your GPA is 2.75");
            break;
        case 79 ... 81 : //If 82>grade>78
            printf("Your GPA is 2.50");
            break;
        case 82 ... 84 : //If 85>grade>81
            printf("Your GPA is 2.25");
            break;
        case 85 ... 87 : //If 88>grade>84
            printf("Your GPA is 2.00");
            break;
        case 88 ... 90 : //If 91>grade>87
            printf("Your GPA is 1.75");
            break;
        case 91 ... 93 : //If 94>grade>90
            printf("Your GPA is 1.50");
            break;
        case 94 ... 96 : //If 97>gr885ade>93
            printf("Your GPA is 1.25");
            break;
        case 97 ... 100 : //If grade = 96 to 100
            printf("Your GPA is 1.00");
            break;
        default: //If input is 100+ or doesn't makes sense
            printf("\nInvalid Input ");
   }
    return 0;
}
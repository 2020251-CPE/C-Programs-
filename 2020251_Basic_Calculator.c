 /*
Basic Calculator
Made by: Angelo Recio
13/10/2021
*/
#include <stdio.h>

int main()
{
    int fnumber;  
    int snumber; 
    int ans;   
    char op; 

    printf("Welcome to a Simple Calculator! \n");
    // Input your first number.
    printf("Input the First Number: ");
    scanf ("%d",&fnumber);
    // Input your Second Nmber.
    printf("Input your Second Number: ");
    scanf ("%d",&snumber);
    // Input Operation to be Used
    printf("Choose An Operator (+  -  /  *): \n");
    scanf(" %c", &op); 

    if (op == '+') {
      ans = fnumber + snumber;
      printf("The answer is: %i \n",ans);
    } else if(op == '-')
     {
      ans = fnumber - snumber;
      printf("The answer is: %i \n",ans);
    } else if(op == '*')
     {
      ans = fnumber * snumber;
      printf("The answer is: %i \n",ans);
     } else if(op == '/')
     {
     ans = fnumber / snumber;
      printf("The answer is: %i \n",ans);
    }
    printf("Thank you for using the Calculator!");
    return 0;
}
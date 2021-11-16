/* Leap Year */

#include <stdio.h>

int isleapyear(int year);

int main () {
    int year;
    printf("Please Enter a Year: ");
    scanf("%d", &year);
    isleapyear(year);
    return 0;
}

int isleapyear(int year) {
    if (year % 400 == 0){ 
      printf("The Year is a Leap Year");
      return 1;
      }
	  else if (year % 100 == 0){ 
      printf("The Year is a Leap Year");
      return 0;
      }
	  else if (year % 4 == 0){ 
      printf("The Year is a Leap Year");
      return 1;
      }
    else {
      printf("The Year is NOT a Leap Year");
    }
		return 0;
}


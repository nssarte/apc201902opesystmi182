#include <stdio.h>

int main() {
   int integer1, integer2, sum;  // Declare 3 integer variables

   printf("Enter first integer: ");   // Display a prompting message
   scanf("%d", &integer1);            // Read input from keyboard into integer1
   printf("Enter second integer: ");  // Display a prompting message
   scanf("%d", &integer2);            // Read input into integer2

   sum = integer1 + integer2;         // Compute the sum

   // Print the result
   printf("The sum of %d and %d is %d.\n", integer1, integer2, sum);

   return 0;
}

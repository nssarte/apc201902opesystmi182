#include <stdio.h>

int main() {
   int sum = 0;    // Declare an int variable sum to accumulate the numbers
                   // Set the initial sum to 0
   int upperbound; // Sum from 1 to this upperbound

   // Prompt user for an upperbound
   printf("Enter the upperbound: ");
   scanf("%d", &upperbound);  // Use %d to read an int

   // Use a loop to repeatedly add 1, 2, 3,..., up to upperbound
   int number = 1;
   while (number <= upperbound) {
      sum = sum + number;   // accumulate number into sum
      ++number;             // increment number by 1
   }
   // Print the result
   printf("The sum from 1 to %d is %d.\n", upperbound, sum);

 return 0;
}



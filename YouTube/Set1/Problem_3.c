/*
Problem 3
SUM of N natural numbers.
Perform SUM of given natural number and print the result.
*/

// Author : Karthik Bhaskaran
// Purpose : To read a number and perform the SUM of given natural number

// Header file
#include <stdio.h>

// Function declaration
int sum_N(int num);

// Function definition
int sum_N(int num)
{
   // Local variables declaration
   int sum = 0;

   // Logic
   for (int i = 1; i <= num; i++)
   {
      sum = sum + i;
   }

   // Function returning the SUM of given natural number
   return sum;
}

// Main program
int main()
{
   // Local variable declaration
   int number, result;

   // Read the data from user
   printf("Enter a natural number: ");
   scanf("%d", &number);

   // Function call
   result = sum_N(number);

   // Print the result
   printf("Sum of %d is: %d\n", number, result);

   return 0;
}
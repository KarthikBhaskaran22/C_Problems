/*
Problem 7
Power of the given numbers.
Perform power of given numbers and print the result.
Without using math.h library.
*/

// Author : Karthik Bhaskaran
// Purpose : To read two numbers and perform power of the given numbers

// Header file
#include <stdio.h>

// Function declaration
int power(int num1, int num2);

// Function definition
int power(int num1, int num2)
{
   // Local variable declaration
   int res = 1;

   // Logic
   for (int i = 1; i <= num2; i++)
   {
      res = res * num1;
   }
   // Function returning the power of the given number
   return res;
}

// Main Program
int main()
{
   // Local variable declaration
   int number1, number2, result;

   // Read the data from user
   printf("Enter the Base number: ");
   scanf("%d", &number1);

   printf("Enter the Exponent number: ");
   scanf("%d", &number2);

   // Function call
   result = power(number1, number2);

   // Printing the result
   printf("%d to the power %d is equal to: %d", number1, number2, result);

   return 0;
}
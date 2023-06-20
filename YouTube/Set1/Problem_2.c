/*
Problem 2
Factorial of a given number.
Perform factorial of a number and print the result.
*/

// Author : Karthik Bhaskaran
// Purpose : To read a number and perform the factorial

// Header file
#include <stdio.h>

// Function declaration
int factorial(int num);

// Function definition
int factorial(int num)
{
   // Local variable declaration
   int fact = 1;

   // Logic
   for (int i = 1; i <= num; i++)
   {
      fact = fact * i;
   }
   // Function returning the factorial of the given number
   return fact;
}

// Main program
int main()
{
   // Local variable declaration
   int number1, number2, result;

   // Read the data from user
   printf("Enter a number: ");
   scanf("%d", &number1);

   printf("Enter a number: ");
   scanf("%d", &number2);

   // Method 1
   // Function call
   result = factorial(number1);
   // Print the result
   printf("Factorial of %d is: %d\n", number1, result);

   // Method 2 - Function call and printing result
   printf("Factorial of %d is: %d\n", number2, factorial(number2));

   return 0;
}
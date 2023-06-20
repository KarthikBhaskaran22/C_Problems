/*
Problem 4
Factorial using recursion.
Perform factorial of a number using recursion and print the result.
*/

// Author : Karthik Bhaskaran
// Purpose : To read a number and perform the factorial using recursion

// Header file
#include <stdio.h>

// Function declaration
int factorial(int number);

// Function definition
int factorial(int number)
{
   // Logic
   if (number == 0) // Factorial of 0 is 1
      return 1;
   else
      // Recursion
      return number * factorial(number - 1); // Function returning factorial
}

int main()
{
   // Local variable declaration
   int number1, number2, result;

   // Method 1
   // Read the data from user
   printf("Enter the first number: ");
   scanf("%d", &number1);
   // Function call
   result = factorial(number1);
   // Printing the result
   printf("Factorial of %d is: %d\n", number1, result);

   // Method 2
   // Read the data from user
   printf("Enter the second number: ");
   scanf("%d", &number2);
   // Function call and printing result
   printf("Factorial of %d is: %d\n", number2, factorial(number2));

   return 0;
}
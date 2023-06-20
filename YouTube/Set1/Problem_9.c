/*
Problem 9
Prime number or not.
Check if the given number is prime or not and print the result.
*/

// Author : Karthik Bhaskaran
// Purpose : To read a number and and check whether it is prime number or not

// Header file
#include <stdio.h>
#include <stdbool.h>

// Function declaration
bool prime(int num);

// Function definition
bool prime(int num)
{
   // Local variable declaration
   int i;

   // Logic
   for (i = 2; i < num; i++)
   {
      if (num % i == 0)
         break;
   }

   if (i == num)
      // Function returning bool true (1) - prime number
      return true;

   else
      // Function returning bool false (0) - not a prime number
      return false;
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
   result = prime(number);

   // Print the result
   if (result == true)
   {
      printf("%d is a prime number\n", number);
   }

   else
   {
      printf("%d is not a prime number\n", number);
   }

   return 0;
}
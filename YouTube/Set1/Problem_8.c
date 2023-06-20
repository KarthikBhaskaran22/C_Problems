/*
Problem 8
Prime number or not.
Check if the given number is prime or not and print the result.
*/

// Author : Karthik Bhaskaran
// Purpose : To read a number and and check whether it is prime number or not

// Header file
#include <stdio.h>

// Function declaration
int prime(int num);

// Function definition
int prime(int num)
{
   // Local variable declaration
   int count = 0, res;

   // Logic
   if (num == 0 || num == 1)
   {
      // Funtion returning - neither a prime number nor a composite number
      return res = 1;
   }

   // Logic
   else if (num >= 2)
   {
      for (int i = 1; i <= num; ++i)
      {
         if (num % i == 0)
         {
            count++;
         }
      }
   }

   // Logic
   if (count == 2)
   {
      // Function returning - prime number
      return res = 2;
   }

   else if (count >= 3)
   {
      // Function returning - not a prime number
      return res = 3;
   }
   else
      // Function returning - a negative number
      return res = -1;
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
   if (result == 1)
   {
      printf("%d is a neither a prime number nor a composite number\n", number);
   }

   else if (result == 2)
   {
      printf("%d is a prime number\n", number);
   }

   else if (result == 3)
   {
      printf("%d is not a prime number\n", number);
   }

   else if (result == -1)
      printf("%d is a negative number\n", number);

   return 0;
}
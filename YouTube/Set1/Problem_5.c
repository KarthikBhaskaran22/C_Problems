/*
Problem 5
Factors of given number.
Create factors of a number and print the result.
*/

// Author : Karthik Bhaskaran
// Purpose : To read a number and create factors of the given number

// Header file
#include <stdio.h>

// Function declaration
int factors(int num);

// Function definition
int factors(int num)
{
   // Local variable declaration
   int count = 0;

   // Logic
   for (int i = 1; i <= num; i++)
   {
      if (num % i == 0)
      {
         // Printing the factors
         printf("%d ", i);

         // Counting the number of factors
         count++;
      }
   }
   printf("\n");

   // Function returning count value
   return count;
}

// Main Program
int main()
{
   // Local Variable declaration
   int number, result;

   // Read the data from user
   printf("Enter a number: ");
   scanf("%d", &number);

   // Printing the factors
   printf("Factors of %d are: ", number);

   // Function call
   result = factors(number);

   // Printing the number of factors
   printf("Number of factors: %d\n", result);

   return 0;
}
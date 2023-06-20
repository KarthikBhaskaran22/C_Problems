/*
Problem 1
Multiplication table of a given number.
Create a multiplication table and print the result.
*/

// Author : Karthik Bhaskaran
// Purpose : To read a number and Create a multiplication table

// Header file
#include <stdio.h>

// Function declaration
int mul_table(int num);

// Function definition
int mul_table(int num)
{
   // Local variable declaration
   int mul;

   // Logic
   for (int i = 1; i <= 10; i++)
   {
      mul = printf("\n%d x %d = %d", num, i, num * i);
   }

   // Function returning the multiplication table of the given number
   return mul;
}

// Main program
int main()
{
   // Local variable declaration
   int number, result;

   // Read the data from user
   printf("Enter a number: ");
   scanf("%d", &number);

   printf("Multiplication table: ");

   // Function call
   result = mul_table(number);

   return 0;
}

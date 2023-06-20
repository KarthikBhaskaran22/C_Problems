/*
Problem 10
Prime numbers in a given range.
Print all the prime numbers within the given range.
*/

// Author : Karthik Bhaskaran
// Purpose : To read a number and and check whether it is prime number or not 

// Header file
#include <stdio.h>
#include <stdbool.h>

// Function declaration
int print_prime(int number1, int number2, int primes[]);
bool prime(int num);

// Function definition
int print_prime(int number1, int number2, int primes[])
{
   // Local variable declaration
   int count = 0;

   // Logic
   for (int num = number1; num < number2; num++)
   {
      // Function call
      if (prime(num))
      {
         primes[count] = num;
         count++;
      }
   }

   // Function returning prime numbers between num1 and num2
   return count;
}

// Function definition
bool prime(int num)
{
   // Local variable declaration
   int i;

   // Logic
   if (num <= 1)
      return false;

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
   int number1, number2;

   // Read the data from user
   printf("Enter the first number: ");
   scanf("%d", &number1);

   // Read the data from user
   printf("Enter the second number: ");
   scanf("%d", &number2);

   // Local array declaration
   int primes[50];

   // Function call
   int count = print_prime(number1, number2, primes);

   // Print the result
   printf("Prime numbers between %d and %d : ", number1, number2);
   for (int i = 0; i < count; i++)
   {
      printf("%d ", primes[i]);
   }
   printf("\n");

   return 0;
}
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int choice;
   long num1, num2, x;
   printf("Please choose your option:"
          "\n1 = Addition"
          "\n2 = Subtraction"
          "\n3 = Multiplication"
          "\n4 = Division"
          "\n5 = Squares"
         "\n\nChoice: ");
   scanf("%d", &choice);
     while(choice < 1 || choice > 5)
   {
      printf("\nPlease choose the above mentioned option."
             "\nChoice: ");
      scanf("%d", &choice);
   }
   switch (choice)
   {
   case 1:
      printf("Enter two numbers: \n");
      scanf("%ld %ld", &num1, &num2);
      x = num1 + num2;
      printf("Sum = %ld", x);
      break;
   case 2:
      printf("Enter two numbers: \n");
      scanf("%ld %ld", &num1, &num2);
      x = num1 - num2;
      printf("Subtraction = %ld", x);
      break;
   case 3:
      printf("Enter two numbers: \n");
      scanf("%ld %ld", &num1, &num2);
      x = num1 * num2;
      printf("Product = %ld", x);
      break;
   case 4:
      printf("Enter Dividend: ");
      scanf("%ld", &num1);
      printf("Enter Divisor: ");
      scanf("%ld", &num2);
     while(num2 == 0)
     {
        printf("\nDivisor cannot be zero."
               "\nEnter divisor once again: ");
        scanf("%ld", &num2);
     }
     x = num1 / num2;
     printf("\nQuotient = %ld", x);
     break;
   case 5:
      printf("Enter any number: \n");
      scanf("%ld", &num1);
      x = num1 * num1;
      printf("Square = %ld", x);
      break;
     default: printf("\nError");
   }
    return 0;
}

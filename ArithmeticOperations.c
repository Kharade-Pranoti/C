//   A program to accept two numbers and find its Sum, Difference and Product.

#include <stdio.h>

int main() {
   int a, b;
   int sum, diff, prod;
   
   // user input for a and b
   printf("Enter the two values:");

   scanf("%d %d", &a, &b);
   
   printf("a = %d b = %d \n", a, b);
   
   sum = a + b;
   diff = a - b;
   prod = a * b;
   
   printf("sum = %d, diff = %d, prod = %d", sum, diff, prod);
   
    return 0;
}

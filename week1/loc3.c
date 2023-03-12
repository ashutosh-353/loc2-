#include <stdio.h>
int main() {
   int num;

   printf("Enter a number: ");
   scanf("%d", &num);
   int digit, sum=0;

   do {
      digit = num % 10;
      sum += digit;
      num /= 10;
   } while(num != 0);

   printf("Sum of digits is: %d", sum);

   return 0;
}

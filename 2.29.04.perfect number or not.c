#include <stdio.h>

int main() {
   int num, sum=0;
   
   printf("Enter a number: ");
   scanf("%d", &num);

   for(int i=1; i<num; i++) {
      if(num%i==0) {
         sum += i;
      }
   }

   if(sum == num) {
      printf("It's a Perfect Number\n");
   }
   else {
      printf("It's not a Perfect Number\n");
   }

   return 0;
}

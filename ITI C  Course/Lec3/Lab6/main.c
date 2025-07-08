#include <stdio.h>

int main(void){

   int x = 7;
   int factorial = 1;
   do{
     factorial *= x;
     x--;
   }while(x!= 0);
   printf("%d\n",factorial);
   return 0;
}

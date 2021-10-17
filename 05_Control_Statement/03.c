#include <stdio.h>

int main(){
      int number,digit,times=0;
      printf("Enter the number and digit:\n");
      scanf("%d",&number);
      scanf("%d",&digit);

      while (0<number)
      {
          int remainder = number%10;
          if(remainder==digit){
              times++;
          }
          number /=10;
      }
      printf("%d is occur %d times in this programm.",digit,times);
      
}   
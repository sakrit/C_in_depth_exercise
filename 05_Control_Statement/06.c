#include <stdio.h>

int main(){
    int number, remainder,sum=0,multiply=1;
    printf("Enter the number: ");
    scanf("%d",&number);

    while(0<number){
        remainder = number%10;
        if(remainder%2==0){
            sum +=remainder;
        }
        else{
            multiply *=remainder;
        }
        number /= 10;
    }
    printf("The sum is %d and multiply is %d.",sum,multiply);
}
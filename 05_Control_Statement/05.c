#include <stdio.h>

int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);

    while (0<number)
    {
        if(number%3==0){
            printf("%d ",number*number*number);
        }
        number--;
    }
    
    
}
#include <stdio.h>

int main(){
    int number;
    printf("Enter the number you want of reverse: ");
    scanf("%d",&number);

    while (0<number)
    {
        printf("%d ",number);
        number--;
    }
    
}
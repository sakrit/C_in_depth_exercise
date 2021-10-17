#include <stdio.h>

int main(){
    int number;
    printf("Write the n-th Value: ");
    scanf("%d",&number);

    while (0<number)
    {
        printf("%d ",number*number);
        number--;
    }
    
}
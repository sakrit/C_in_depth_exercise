#include <stdio.h>

int main(){
    int number, index, result=1;
    printf("Enter the number and index number respectively: ");
    scanf("%d%d",&number,&index);

    while (0<index)
    {
        result *= number;

        index--;
    }
    printf("The result is %d",result);
    
    
}
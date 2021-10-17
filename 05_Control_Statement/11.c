#include <stdio.h>

void main(){
    int programNo = 3, n = 4;

    switch (programNo)
    {
    case 1:{
            int sum=1;
            for(int i =0; i<n; i++){
                sum += i;
                printf("%d ",sum);
            }
            break;
            }

    case 2:{
        int sum=1;
        int number=1;
        while (n>1)
        {
            number = number*10+1;
            printf("%d ",number);
            sum+=number;
            n--;
        }
            printf("%d ", sum);
        break;   
    }

    case 3:{
        int sum=0, x=2,number=1;
        while (n>0)
        {
            number *= x;
            sum+=number;
            printf("%d ", number);
            n--;
        }
            printf("%d", sum);
        break;
    }

    
    default:
        printf("Please! Enter a valid program.");
        break;
    }
}

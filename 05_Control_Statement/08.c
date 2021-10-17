#include <stdio.h>

int main(){
    int number=89865, result=0, remainder,remOfResult;

    while (0<number)
    {
        remainder = number % 10;
        result = result*10 +remainder;
        number /=10; 
    }

    while (result>0)
    {
        remOfResult = result % 10;
        switch (remOfResult)
        {
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        
        default:
            printf("Zero ");
            break;
        }
        result /= 10;
    }
    

    }
   
    

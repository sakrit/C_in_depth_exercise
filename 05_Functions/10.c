#include <stdio.h>

int numToWord(int);
int main(){
    numToWord(31246);
}

int numToWord(int number){
    int rem = number % 10;
    numToWord(number/10);
    switch (rem)
    {
    case 1:
        printf("One ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("Threee ");
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
    if(number==0){
        return 0;
    }

}
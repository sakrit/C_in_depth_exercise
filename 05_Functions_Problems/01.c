/*  Program to convert binary or octal number to decimal numbers*/

#include <stdio.h>

int func(int , int);

int main(){
    int num, base, result;
    char choice;
    printf("Enter 'b' for binary and 'o' for octal: ");
    scanf("%c",&choice);
    printf("Enter the number: ");
    scanf("%d", &num);
    if(choice=='b')
        base = 2;
    else
        base  = 8;

    result =  func(num,base);
    printf("The decimal is: %d ", result);

}

int func(int n, int base){
    int rem, d, j=1, dec=0;
    // for n = 15
    while(n>0){
        rem = n % 10; //1 1 1 1     //7 1
        d = rem * j;  //1 2 4 8     //7 8
        dec += d;     //1 3 7 15    //7 15
        j *= base;    //2 4 8       //8 16
        n /= 10;
    }
    return dec;
}

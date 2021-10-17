#include <stdio.h>

void sum(double);

int main(){
    sum(4);
}

void sum(double input){
    double a = 1,i, b =2, sum=a+1/b;
    for(i = 2; i<=input; i++){
        sum = sum + 1/(i*i);
    }
    printf("Sum is %lf ", sum);
}
#include <stdio.h>

int cubesum(int);

int main(){
    int input;
    printf("Enter the range in three digit or above:  ");
    scanf("%d",&input);
    printf("The sum is : %d ", cubesum(input));
}
    
int cubesum(int input){
    int n, sum, rem,cube;
    for(int num = 100; num<=input; num++){
        n = num;
        sum=0; 
        while (n > 0)
        {   
            rem = n % 10;
            n /= 10;
            cube = rem*rem*rem;
            sum += cube;
        }
        if(sum==num){
            printf("Armstrong number in range : - %d \n",num);
        }
        
        
    }
    return sum;
}
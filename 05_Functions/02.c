#include <stdio.h>

void product(int);
int pers(int);

int main(){
    product(86);
    printf("\nThe persistence count is : %d", pers(86));
}

void product(int input){
    int rem,product,n;
    while (input/10 !=0)
    {   
        n = input;
        product = 1;
        while(n>0){
            rem = n % 10;
            product *= rem;
            n /= 10;
        }
        printf("%d ",product);
        input = product;
    }
    
}

int pers(int input){
    int rem,product, n ,i=0;
    while (input/10)
    {   
        n = input;
        product = 1;
        while (n>0)
        {
            rem = n % 10;
            product *= rem;
            n /= 10; 
        }
        i++;
        input = product;
        
    }
    return i;
    
}
#include <stdio.h>

int sumdiv(int);

int main(){
    sumdiv(800);
}

int sumdiv(int input){
    for (int n = 1; n <= input; n++)
{
        int div, sum = 0;
        for (int i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                div = i;
                sum += div;
            }
        }
        if (n == sum)
        {
            printf("Perfect numbers in given range: %d \n", n);
        }
    }
}
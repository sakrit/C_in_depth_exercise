#include <stdio.h>

int main(){
    int a = 0, b = 1,c,n=33;

    for(int i = 2; i<=n; i++){
        c = a+b;
        a = b;
        b = c;

        if(n==c){
            printf("This %d is in fibonacci.",n);
            break;
        }
        if(n!=c&&c>n){
            printf("This %d is not in fibonacci.",n);
            break;
        }
    }
}
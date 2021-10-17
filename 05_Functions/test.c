#include <stdio.h>

int func(int,int);

int main(){
    int p = func(5,6);
    printf("%d ",p);

}

int func(int x, int y){
    int x = 3;
    return x*y;
}
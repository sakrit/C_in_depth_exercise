#include <stdio.h>
#include <math.h>


int roots(int, int, int);

int main(){
    roots(1,4,4);
}

int roots(int a, int b, int c){
    int d;
    double x,y;
    d = b*b - 4*a*c;
    printf("%d  ",d);

    if(d>0){
        x = -b + sqrt(d)/2*a;
        y = -b - sqrt(d)/2*a;
        printf("%lf,%lf",x,y);
    }

    else if (d==0)
    {
        x = -b/2*a;
        y = -b/2*a;
        printf("%lf,%lf",x,y);
    }
    else{
        printf("This cannot be solved: ");
    }
    


}
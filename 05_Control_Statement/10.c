#include <stdio.h>

int main(){
        int m=2,input=50,
        a,b,c=0;
       while (c<input)
       {
        for(int n=1; n<m; n++){
            a = m*m - n*n;
            b = 2*m*n;
            c =  m*m + n*n;

            if (c>input)
            {
                break;
            }

            printf("%d %d %d\n",a,b,c);
        }
        m++;
           
           
       }
       
}
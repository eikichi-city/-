#include<stdio.h>	

int main()
{
    int a,b,c,d;
    
    a=2;
    b=1;
    c=4;
    
    d=a+b;
    
    if (d>=c){
        printf("条件を満たしています");
    }
    else if (c>a*2){
        printf("条件を満たしています");
    }
    else{
        return 0;
    }
}
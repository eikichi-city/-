#include<stdio.h>	

int main()
{
    int a,b,c,d;
    
    a=3;
    b=4;
    
    c=a+b;
    d=a*b;
    
    if (c>d){
        printf("a+b=%d",c);
    }
    else{
        printf("a*b=%d",d);
    }
}
#include <stdio.h>

int main()
{
    int n,flag;
    
    flag=0;                         //flag=0のときうるう年でない、flag=1のときうるう年であるとする
    
    printf("input a number=");      
    scanf("%d",&n);                 //nに調べたい西暦を代入
    
    if (n%400==0){                  //400で割り切れる場合は，うるう年である
        flag=1;
    }
    else if (n%100==0){             //400で割り切れない場合，100で割り切れる場合はうるう年ではない
        flag=0;
    }
    else if (n%4==0){               //100で割り切れない場合，4で割り切れる場合はうるう年である
        flag=1;
    } 
    else{                           //4で割り切れない場合，うるう年ではない
        flag=0;
    }
    
    if(flag==0){                                    //flag=0のときうるう年でない、flag=1のときうるう年であるとする
        printf("%d年はうるう年ではありません",n);
    }
    else{
        printf("%d年はうるう年です",n);
    }

    return 0;
}

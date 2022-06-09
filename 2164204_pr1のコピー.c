#include <stdio.h>

int main()
{
    int i=0;
    while(i<100){   /*iが100未満*/
        i=i+1;  /*iの値を1ずつ増やす*/
        if(100%i==0){   /*iが100の約数か判定*/
            printf(" %d",i);    /*iを表示*/
        }
    }
}
#include <stdio.h>

int main()
{
    int i,sum = 0;  /*変数を宣言*/
    
    for(i=1;i<=100;i++){  /*iの初期値1、iが100以下の場合、iの値を1増やす*/
        sum = sum + i;  /*sumにiを足す*/
    }
    printf("sum = %d",sum); /*1から100までの自然数の総和を表示する*/
}
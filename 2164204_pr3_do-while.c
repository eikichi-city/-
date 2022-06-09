#include <stdio.h>

int main()
{
    int i = 1,sum = 0;  /*変数を宣言*/
    
    do{
        sum = sum + i;  /*sumにiを足す*/
        i++;    /*iの渡井を1増やす*/
    }while(i<=100); /*iが100以下の場合繰り返す*/
    
    printf("sum = %d",sum); /*1から100までの自然数の総和を表示する*/
}
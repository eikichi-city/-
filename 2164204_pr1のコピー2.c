#include <stdio.h>
int sum_loop();
int sum_recur();//総和を求める関数（再帰処理）の宣言

int main( void )
{
    int i;//for文の繰り返し要変数を用意する
    
    printf("sum of ... \n");
    
    for(i=5;i<=10;i++){　//nを5から10まで変更する繰り返し処理
        //総和を求める関数（繰り返し処理）の呼び出し
        printf("1 to %d (loop)          : %d \n",i,sum_loop(i));
        //総和を求める関数（再帰処理）の呼び出し
        printf("1 to %d (recrusion)     : %d \n",i,sum_recur(i));
        printf("\n");　//次のnとの間を1行あける
    }
    return 0;
}

int sum_loop(int i)
{
    int sum=0;
    int j;
    for (j=0;j<=i;j++){　
        sum=sum+j;
    }
    return sum;
}

int sum_recur(int i)
{
    if(i>1){
        return i+sum_recur(i-1);
    }
}



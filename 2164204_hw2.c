// ポインタ変数を用いて、2＾ｎ（50000まで）を表示するプログラム
#include <stdio.h>

void func(int *ip);//関数のプロトタイプを宣言

int main( void )
{
    int *ip,n=1;//変数を定義
    ip = &n;//ポインタ変数にアドレスを代入
    do{//繰り返し処理
        printf("%8d",n);//値を表示
        func(ip);//関数の呼び出し
    }while(n <= 50000);//50000を超えないところまで
    return 0;
}

void func(int *ip)//アドレスの中身を2倍する関数
{
    *ip = 2 * *ip;//アドレスの中身を2倍する
}

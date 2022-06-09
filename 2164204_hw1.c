#include <stdio.h>

int main(void)
{
    int *ip,n;//まず、int型変数 n とポインタ変数 ip を定義
    printf("input n=");//キーボードからの入力を促し、入力をint 型変数に格納
    scanf("%d",&n);
    printf("nのアドレスは%p\n",ip);//int型変数 n のアドレスを表示
    ip = &n;//int型変数 n のアドレスをポインタ変数 ip に格納
    *ip = *ip * 3;//ポインタ変数を 使った演算で n のアドレスの中身を 3 倍する
    printf("3*n=%d",n);//int 型変数 n を表示する
    return 0;
}
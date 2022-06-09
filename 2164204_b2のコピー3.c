// 文字コードを利用して文字を扱うプログラム
#include <stdio.h>
#define N 8     //Nを定義

int main( void )
{
    int happynewyear[N][N];     //2次元配列の宣言
    int i,j;    //繰り返し変数の宣言
    int n=33;   //整数nを宣言
    
    for(i=0;i<N;i++)    //行に対する繰り返し
    {
        for(j=0;j<N;j++)    //列に対する繰り返し
        {
            happynewyear[i][j] = n;     //i行ｊ列にｎを代入
            printf("%p ",&happynewyear[i][j]);      //アドレスを表示
            n++;    //インクリメント
        }
        printf("\n");   //改行
        n = n-N;        //nをi行0列の値に戻す
        for(j=0;j<N;j++)    //列に対する繰り返し
        {
            printf("%10d : %c",happynewyear[i][j],n);   //値を表示
            n++;    //インクリメント
        }
        printf("\n");   //改行
    }
    return 0;   //終了
}

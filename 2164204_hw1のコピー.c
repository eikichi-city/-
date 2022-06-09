#include <stdio.h>
#define N 16    //要素数Nを定義

int main()
{
    int table[N][N];    //配列を定義
    int i,j;    //int型変数を定義
    
    for( i=0; i<16; i++)    //行に対する繰り返し
    {
        for( j=0; j<16; j++)    //列に対する繰り返し
        {
            table[i][j] = (i+1)*(j+1);  //データを格納、帳尻合わせ
            printf("%4d",table[i][j]);  //表示
        }
        printf("\n");   //改行
    }
    return 0;
}

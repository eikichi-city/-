//任意の「 文字 」 ( 半角英数字 1 文字 ) を入力し、 その「 文字 」を 1 行に任意の個数を表示する行を 「 5 行 」画面に出力するプログラム
#include <stdio.h>
#include <math.h>
void five_lines_print( char c, int n );

int main( void )
{
    char c;
    int n,m;//変数定義
        printf("input a character! : " );//文字入力を勧告
        scanf("%c",&c); //入力
        printf("number of character : ");//数字入力を勧告
        scanf("%d",&n); //入力
        for(m=1;m<=n;m++){//for文
            printf("%d",m%10);//0~9までの数字で入力された文字数のスケールを出力する 
        }
        printf("\n");//改行
        five_lines_print( c,n );//関数の呼び出し、実行
}

void five_lines_print( char c, int n )//関数を定義
{
    int i,j;//関数ないの変数を定義
    for(i=1;i<=5;i++){//for文、5回繰り返す
        for(j=1;j<=n;j++){//入力された数字だけ
            printf("%c",c);//入力された文字を表示する
        }
        printf("\n");//行を変える
    }
}

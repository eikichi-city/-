//x の y 乗を計算するプログラム
#include <stdio.h>
#include <math.h>
int y_th_power();//関数のプロトタイプを宣言

int main()
{
    int x;
    int y;
    int z;//変数を定義
    
    printf("x の y 乗を計算します\n");//プログラムの趣旨を説明
    
    do{//do while文
    printf("自然数ｘを入力してください：x = ");//xを入力させる
    scanf("%d",&x);//入力
    printf("自然数ｙを入力してください：y = ");//yを入力させる
    scanf("%d",&y);//入力
    }while(x < 1 || y < 1);//x,yを自然数に
    
    z = power( x,y );//関数の戻り値を格納
    printf("x^y = %d",z);//結果を表示
}

int power( int x,int y )//関数を定義
{
    if(y == 1){//y=1のとき
        return x;//xを戻す
    }
    else{//yが1以外の自然数の時
        return x*power(x,y-1);//x＾ｙを計算し戻す
    }
}

//2 次元座標 ( x, y ) と原点 ( 0, 0 ) とのユークリッド距離を求めるプログラム
#include <stdio.h>
#include <math.h>//平方根を使えるようにする
double distance(double x,double y);//関数のプロトタイプを宣言

int main()
{
    double x;
    double y;//変数を定義
    printf("x座標を入力してください x = ");//入力を勧告
    scanf("%lf",&x);//入力
    printf("x=%lf\n",x);//表示
    printf("y座標を入力してください y = ");//入力を勧告
    scanf("%lf",&y);//入力
    printf("y=%lf\n",y);//表示
    distance(x,y);//関数の呼び出し
}

double distance(double x,double y)//関数を定義
{
    double d;//変数を定義
    d = sqrt(x*x+y*y);//（0、0）から（x、y）の距離の式
    printf("(0,0)==>(%lf, %lf) = %lf\n",x,y,d);//結果を表示
}

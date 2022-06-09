#include <stdio.h>
#include <math.h>   //

double kaup( double h, double w );  //関数のプロトタイプを宣言

int main()
{
    struct person   //構造体を宣言
    {
        char name[30];
        int age;
        double height;
        double weight;
        double bmi;
    };
    
    struct person fd = { "Taro", 19, 1.65, 55.5, 0};    //構造体の初期化、bmiの初期値は0にしておく
    
    fd.bmi = kaup( fd.height, fd.weight);   //bmiの値を関数の計算結果にする
    
    printf("Name = %s\n",fd.name);  //名前を表示
    printf("Age = %d\n",fd.age);    //年齢を表示
    printf("BMI = %f\n",fd.bmi);    //BMIを表示
    
    return 0;
}

double kaup( double h, double w )
{
    double bmi; //関数内の変数を定義
    bmi = w / pow( h, 2.0); //bmiの計算式
    return bmi; //bmiの値を戻す
}

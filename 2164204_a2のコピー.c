#include <stdio.h>
#include <math.h>

typedef struct {    //一気に構造体を宣言
    int x, y, z;
} point;

double d(point p1, point p2);       //double型関数のプロトタイプを宣言

int main() {
    point p1 = {2, 2, 2};       //1つ目の構造体、1点目
    point p2 = {0, 0, 0};       //2つ目の構造体、2点目
    printf("%f", d(p1, p2));    //2点の座標の表示
}

double d(point p1, point p2) {  //2点間の距離を計算する関数
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) + pow(p1.z - p2.z, 2));       //sqrt:平方根 pow:n乗 計算式
}
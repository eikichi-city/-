//1から100までの自然数で2でも3でも5でも割れない数を表示するプログラム
#include <stdio.h>

void func(int *n1, int *n2, int *n3);   //関数のプロトタイプを宣言

int main(){
    int i;
    int mod2, mod3, mod5;   //変数を宣言

    for (i = 1; i <= 100 ; i++) {    //1から100まで繰り返す
        mod2 = mod3 = mod5 = i;     //全てに同じ数を代入する
        func(&mod2, &mod3, &mod5);      //関数にアドレスを代入
        if ((mod2) * (mod3) * (mod5) != 0) {    //処理後の値が全て0でない場合
            printf("%d ", i);   //2でも3でも5でも割り切れない数を表示
        }
    }
    printf("\n");   
    return 0;   
}

void func(int *n1, int *n2, int *n3){   //ポインタ関数
    *n1 = *n1 % 2;  //i mod2
    *n2 = *n2 % 3;  //i mod3
    *n3 = *n3 % 5;  //i mod5
}

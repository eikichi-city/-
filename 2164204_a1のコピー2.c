#include <stdio.h>

#define n 20

int main() {
    int out[] = {1, 1, 2, 3, 5, 8, 13};     //配列を宣言
    for (int i = 0; i < n; i++) {
        printf("%d ", out[i % 7]);          //mod7でiを分類して7個おきに値を表示する
    }
}

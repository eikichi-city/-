#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int radius, max;
    int count = 0;
    double x, y, z, pi;

    // radius の値を受け付ける
    printf("円の半径：");
    scanf("%d", &radius);

    // max の値を受け付ける
    printf("点の総数：");
    scanf("%d", &max);

    // 乱数のシードを変更
    srand(time(NULL));

    // ランダムな点(x, y)を max 回生成し、その点が半径radiusの円の中に何回入るかを求める
    for (int i = 0; i < max; i++) {
        x = (double)( rand() % ( radius * 2 + 1 ) - radius ); // x に -radius ~ radius の乱数を代入
        y = (double)( rand() % ( radius * 2 + 1 ) - radius ); // y に -radius ~ radius の乱数を代入

        z = sqrt(x*x + y*y); // 原点から点(x, y) までの距離を求める

        // 点(x, y) が半径radiusの円の中にあれば、countを1増やす
        if (z <= radius) {
            count++;
        }
    }

    // 課題文の(2)式からπを求める
    pi = (double)count / max * 4;

    printf("円の中に入った回数 = %d\n", count);
    printf("円周率 = %lf\n", pi);

    return 0;
}


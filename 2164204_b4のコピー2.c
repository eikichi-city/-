#include <stdio.h>

int main() {
    int i, num, score;
    char name[256];
    FILE *infp;                             //ファイルポインタ    

    infp = fopen("data3.txt", "r");         //読み込み用ファイルオープン  

    fscanf(infp, "%d", &num);               //人数を読み込む

    printf("人数：%d\n", num);              //読み込んだ人数を表示する

    for (int i = 1; i <= num; i++) {        //人数分繰り返す
        fscanf(infp, "%s %d", name, &score);//名前、点数を読み込む

        printf("No.%d\n", i);
        printf("　名前：%s\n", name);       //読み込んだ名前を表示する
        printf("　点数：%d\n", score);      //読み込んだ点数を表示する
    }

    fclose(infp);                           //読み込み用ファイルをクローズ

    return 0;
}

#include <stdio.h>

int main() {
    int i, num, score;
    char name[256];
    FILE *outfp;                                    //ファイルポインタ

    outfp = fopen("data3.txt", "w");                //書き込み用ファイルオープン

    printf("人数：");   scanf("%d", &num);          //人数を入力

    fprintf(outfp, "%d\n", num);                    //ファイルに書き込む

    for (i = 1; i <= num; i++) {                    //人数分繰り返す
        printf("No.%d\n", i);
        printf("　名前：");   scanf("%s", name);    //名前を入力
        printf("　点数：");   scanf("%d", &score);  //点数を入力

        fprintf(outfp, "%s %d\n", name, score);     //ファイルに書き込む
    }

    fclose(outfp);                                  //書き込み用ファイルクローズ
    printf("入力データを data3.txt へ書き込みました\n");

    return 0;
}

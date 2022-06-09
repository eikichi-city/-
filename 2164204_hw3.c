#include <stdio.h>

int main(void)
{
    FILE *fp1,*fp2;     //ファイルポインタ
    int c, counter=0;   //int型変数宣言

    fp1 = fopen("Coll_of_ES.txt","r");  //読み込み用ファイルオープン
    printf("Coll_of_ES.txt :\n");       //表示
    fp2 = fopen("copy1.txt","w");       //書き込み用ファイルオープン

    while( ( c = getc(fp1) ) != EOF ){  //EOFまで読み込み
        putc(c,fp2);                    //書き込み
    }
    fclose(fp1);        //読み込み用ファイルクローズ
    fclose(fp2);        //書き込み用ファイルクローズ

    return 0;
}
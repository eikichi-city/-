#include <stdio.h>

int main( void )
{
    FILE *fp;   //ファイルポインタを宣言
    int c;
    
    fp = fopen("file.txt","r");     //ファイルのオープン
    
    while( (c = getc(fp)) != EOF ){     //EOFになるまでファイルから1文字ずつ読み取る
        putchar(c);     //そのまま表示する
    }   
    
    fclose(fp);     //ファイルを閉じる

    return 0;
}

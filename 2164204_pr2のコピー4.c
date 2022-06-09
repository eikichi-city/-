#include <stdio.h>

int main( void )
{
    FILE *fp;           //ファイルポインタを宣言
    char str[256];      //256字以内文字配列を宣言
    
    fp = fopen("data.txt","r");     //ファイルを開く
    
    while( fgets(str,256,fp) != NULL ){     //ファイルの文字がNULL文字になるまで
        if(str[0] == 'a'){                  //行の最初の文字がaの場合
            puts(str);                      //その行を表示
        }
    }
    
    fclose(fp);         //ファイルを閉じる

    return 0;
}
//ポインタを用いた文字列の連結を行うプログラム
#include <stdio.h>

int main( void )
{
    int i;  //繰り返し変数の宣言
    char *p;    //ポインタの宣言
    char *q;
    char str1[] = "Eikichi";    //文字列の宣言
    char str2[] = "Nomura";
    char str3[sizeof(str1)+sizeof(str2)];   //文字型変数の宣言
    
    i = 0;  //変数リセット
    p = str1;   //srt1の先頭アドレスを代入
    while(*(p + i) != '\0'){    //\0になるまで
        *(p + i) = str1[i];     //文字を代入
        i++;    //インクリメント
    }
    
    i = 0;  //変数リセット
    q = str2;   //srt2の先頭アドレスを代入
    while(*(q + i) != '\0'){    //\0になるまで
        *(q + i) = str2[i];     //文字を代入
        i++;    //インクリメント
    }
    
    i = 0;  //変数リセット
    while( i != sizeof(str1)){  //str1を全て代入
        str3[i] = *(p + i);     //文字を代入
        i++;    //インクリメント
    }
    
    str3[i] = ' ';      //str1とstr2の間にスペース入れる
    
    i = 0;  //変数リセット
    while( i != sizeof(str2)){  //str2を全て代入
        str3[sizeof(str1) + i +1] = *(q + i);   //文字を代入
        i++;    //インクリメント
    }
    
    i = 0;  //変数リセット
    while( i != sizeof(str1) + sizeof(str2)){   //str1とstr2の長さ分繰り返し
        printf("%c",str3[i]);   //str3を表示
        i++;    //インクリメント
    }
    
    return 0;   //終了
}

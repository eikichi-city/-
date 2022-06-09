//配列を用いた文字列の連結を行うプログラム
#include <stdio.h>

int main( void )
{
    int i=0;  //繰り返し変数の宣言
    int j;    //保存用変数の宣言
    int n=0;  //繰り返し変数の宣言
    char str1[] = "Eikichi";    //文字列の宣言
    char str2[] = "Nomura";
    char str3[100];   //文字型配列の宣言
    
    for(i,n; str1[n]!='\0'; i++,n++)  //str1がNULLになるまで繰り返し
    { 
        str3[i] = str1[n];  //文字代入
    }
    
    i++;    //インクリメント
    str3[i] = ' ';    //スペース代入
    i++;    //インクリメント
    
    n=0;    //リセット
    
    for(i,n; str2[n]!='\0'; i++,n++) //str2がNULLになるまで繰り返し
    {
        str3[i] = str2[n];  //文字代入
    }
    
    i++;    //インクリメント
    str3[i] = '\0'; //最後にNULLを入れる
    
    j=i;    //iの値を保存
    for(i=0;i<=j;i++){  //繰り返し
        printf("%c",str3[i]);   //表示
    }
    
    return 0;   //終了
}
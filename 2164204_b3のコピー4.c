// ポインタによる配列を扱うプログラム
#include <stdio.h>

int main( void )
{
    char str[100]=" yokohama national university "; //文字配列を宣言
    char n=97;  //アルファベットに対応する変数を宣言
    int i=0;    //カウント用変数を宣言
    char *cp;   //文字型アドレス変数を宣言
    char moji;  //文字代入用変数を宣言
    
    for(n;n<=122;n++)   //aからzまで繰り返す
    {
        cp=str;     //cpのアドレスをstrの最初のアドレスにセットする
        do      //繰り返し
        {
            moji = *cp;     //文字を格納
            if(moji == n)   //調べてるアルファベットと一致したら
            {
                i++;        //カウントする
            }
            cp++;           //次の文字へ
        }
        while(*cp!='\0');   //NULL文字まで繰り返し
        if(i != 0)          //一回でもカウントされたら
        {
            printf("%c : %d\n",n,i);    //何文字あるか表示
        }
        i=0;    //カウントをリセット
    }
    
    return 0;   //終了
}

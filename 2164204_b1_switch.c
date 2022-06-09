#include <stdio.h>

int main()
{
/*変数を定義*/
    int num;
    
    /*キーボードで入力を施すメッセージを記述*/
    printf("キーボードで任意の整数を入力してください：");
    
    /*scanf()を使って、入力した数字を変数に格納する*/
    scanf("%d", &num);
    
    /*入力した数字を表示する*/
    printf("入力された整数は %d です\n",num);
    
    /*switch()による条件分岐*/
    switch(num){
        case 1:printf("1 です"); break;
        case 2:printf("2 です"); break;
        default:printf("1 でも 2 でもありません");
    }
    
    /*最後にプログラムの正常終了をシステムに通知する*/
    return 0;
}

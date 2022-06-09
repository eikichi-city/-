#include <stdio.h>
int call_me( void );

int main( void )
{
    int c,n=0;//変数定義
    do{//do while文
        printf("Call me please! ( Y: 1 / N: 0 ) : " );//1か0を入力を勧告
        scanf("%d",&c); //入力
        if ( ( c == 1 ) ){//電話をかける場合
            n = call_me();//call_me()関数を呼び出す
        }
    } while( ( c != 0 ) );//電話をかけない場合は終了、電話をかけるまたは変な数字を入力した場合続ける
    printf("Count of call is %d. \n",call_me());//電話かけた回数を出力
    return 0;
}

int call_me( void )
{
    static int count=0;//静的変数を定義
    count++;//数を1増やす
    printf("Thank you for your %d times call! \n",count);//今まで電話をかけた回数を表示
    return count;
}

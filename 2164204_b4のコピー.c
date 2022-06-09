//構造体の配列を扱うプログラム
#include <stdio.h>
#define N 5   //N（生徒数）を定義

int main( void )
{
    struct Fi{          //構造体を定義
        char name[50];
        float gpa;      
    };
    struct Fi fm[N];  //構造体の配列を定義
    int i;              //繰り返し変数を指定
    
    printf("=== please input number ===\n");    
    
    for(i=0;i<N;i++)      //N回繰り返し
    {
        printf("NO.%d\n",i+1);
        printf("family name = "); 
        scanf("%s",fm[i].name);           //名前を入力
        printf("GPA ( [ 0.0 to 5.0 ] ) = "); 
        scanf("%f",&fm[i].gpa);           //GPAを入力
    }
    
    printf("\n");       //改行
    
    int maxnum=0;               //最大値をとるiを特定するための変数、0としておく
    float max=fm[maxnum].gpa;   //GPAの最大値の変数を定義
    
    for(i=1;i<N;i++)          //N回繰り返し
    {
        if(fm[i].gpa > max)   //GPA比較しより大きいならば
        {
            maxnum=i;           //最大値を取るiを変更
            max=fm[maxnum].gpa; //GPAの最大値を変更
        }
    }
    
    printf("%s : %f\n",fm[maxnum].name,fm[maxnum].gpa);    //上で求めた最大値とその名前を表示
    
    return 0;   //終了
}
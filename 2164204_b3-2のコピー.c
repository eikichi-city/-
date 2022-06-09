/*乱数モンスター退治プログラム*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*変数を定義*/
    int hp = 25;
    int attack;
    
    /*ゲームスタート！*/
    srand( time(NULL) );
    printf("モンスターが現れたぞ！\n");
    printf("モンスターの HP は %d だ！\n",hp);
    
    /*do while文*/
    do{
    /*1〜4の数字をランダムに設定*/
        int random = rand()%4 + 1;
    /*1〜4のアタックナンバーを入力*/
        do{
            printf("アタックナンバーを入力しよう！（1〜4）:");
            scanf("%d",&attack);
        }while(attack < 1 || 4 < attack);
    /*攻撃に関する変数を定義*/
        int damage = (attack - random)*(attack - random);
        hp = hp - damage;
    /*攻撃当たるかな？*/
            if(random != attack){
                printf("攻撃が当たった！\n");
                printf("モンスターの HP は %d だ！\n",hp);
            }
            else{
                printf("攻撃が当たらなかった\n");
            }
        }while(hp>0);
    /*ゲーム終了！*/
    printf("やった〜モンスターを倒したぞ！\n");
}
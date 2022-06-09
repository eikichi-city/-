#include <stdio.h>

int main()
{
    int a,i,flag;

        a=53;           //素数判定する値
        flag=0;         //以降素数判定に利用
        
    for (i=2; i<=a-1; i++){
        if (a>=2 && a%i==0){                  //「aが2以上」かつ「aが2以上a-1以下のある整数で割り切れる」なのか判定
            flag=1;                           //条件を満たす、つまりaが素数でないならflagを1とする
        }
    }
    
    if (flag==0){
        printf("%dは素数です",a);             //flagが0ならaは素数
    }else{
        printf("%dは素数ではありません",a);   //flagが1ならaは素数でない
    }
printf("\n");
}
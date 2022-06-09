#include <stdio.h>

int main( void )
{
    int data[10];                       /*int型配列data[10]を宣言*/
    int i, maxnum, max;                 /*maxnumは最大値を与える添字を表す*/
                                        /*maxは最大値を表す*/
    for( i = 0; i < 10; i++ ){
        printf( "data[%d] = ",i );
        scanf( "%d",&data[i] );
    }
    maxnum = 0;                         /*最大値を与える添字を仮に0とした*/
    max = data[maxnum];                 /*仮の最大値(=data[0])*/
    
    for( i = 1; i < 10; i++){
        if( data[i] > max){
            maxnum = i;                 /*最大値の添字を更新*/
            max = data[i];              /*最大値を更新*/
        }
    }
    
    printf("Maximum ==> data[%d]=%d\n", maxnum , data[maxnum] );
    return 0;
}

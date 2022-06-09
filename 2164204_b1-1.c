#include <stdio.h>
int func( int n ); //関数のプロトタイプを宣言

int main()
{
    int a=3; //変数を宣言
    printf("a = %d, adress = %p\n", a, &a); /* (1) */
    printf("a * 3 = %d, adress = %p\n", func(a), &a); /* (2) */
    printf("a * 3 = %d, adress = %p\n", a * 3, &a); /* (3) */
    return 0;
}

int func( int n) 
{
    int a=1; //関数内の変数を宣言
    printf("a * 3 = %d, adress = %p\n", a * 3, &a); /* (4) */
    printf("n * 3 = %d, adress = %p\n", n * 3, &n); /* (4) の次の行に挿入 */
    return n * 3; //引数の3倍を戻り値とする
}

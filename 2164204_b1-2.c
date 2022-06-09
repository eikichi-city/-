#include <stdio.h>
void func( int *n ); //関数のプロトタイプを宣言

int main()
{
    int a = 3; //変数を宣言
    int *xa; //ポインタ変数を宣言
    printf("    a = %d, adress = %p\n", a, &a); /* (1) */
    xa = &a;
    func( xa );
    printf("    a = %d, adress = %p\n", a, &a); /* (1) の複製*/
    printf("a * 3 = %d, adress = %p\n", a * 3, &a); /* (3) */
    return 0;
}

void func( int *n ) 
{
    int a = 1; //関数内の変数を宣言
    printf("a * 3 = %d, adress = %p\n", a * 3, &a); /* (4) */
    *n = *n * 3;
    printf("a * 3 = %d, adress = %p\n", *n, n); /* (4) の次の行に挿入 */
}

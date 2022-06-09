#include <stdio.h>

int main( void )
{
    char str1[] = "abcdefghijklmn";
    char str2[] = "apx";
    char *cp1,*cp2;
    int found;
    
    cp2 = str2;
    while( *cp2 != '\0' ){
        cp1 = str1;
        printf("%c : ",*cp2);
        found = 0;
        
        while( *cp1 != '\0' && found == 0 ){    //NULLになるまで、また同じ文字が見つかるまで繰り返す
            if( *cp1 == *cp2 ){                 //同じ文字だった場合
                printf("found\n");
                found = 1;
            }
            cp1++;                              //アドレスを1増やす
        }
        if( found == 0){
            printf("not found\n");
        }
        cp2++;                                  //アドレスを1増やす
    }
    return 0;
}

#include <stdio.h>
int main(int argc,char *argv[]) {     

    FILE *fp1,*fp2;    //ファイルポインタ
    int c, counter=0;     
    
    while( ( c = getc(fp1) ) != EOF ){   //fp1を読み取る      
        putc(c,fp2);                     //fp2に書き込む
    }     

        fclose(fp1);     //ファイルを閉じる
        fclose(fp2);      
        return 0; 
    
}
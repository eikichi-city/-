#include <stdio.h>
int main(int argc,char *argv[]) {     

    FILE *fp;    //ファイルポインタ
    int c, counter=0;
    char str[256];
    
    if( (fp=fopen(argv[1],"r") ) == NULL){                      //元ファイルがオープン出来なければ終了
       fprintf(stderr,"%s:Cannot open %s/n",argv[0],argv[1]);
   }
   
    while( fgets(str,256,fp) != NULL ){            //ファイルの文字がNULL文字になるまで
        if( str[0] != '\n' ){                      //行の最初の文字が\nなら
             printf("%s",str);                     //その行を表示
        }
    }

        fclose(fp);     //ファイルを閉じる
        return 0; 
    
}

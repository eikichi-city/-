#include <stdio.h>

int ifspace(char *str);     //関数のプロトタイプを宣言

int main(int argc,char *argv[]) {     

    FILE *fp;    //ファイルポインタ
    char str[256];
    
    if( (fp=fopen(argv[1],"r") ) == NULL){                      //元ファイルがオープン出来なければ終了
       fprintf(stderr,"%s:Cannot open %s/n",argv[0],argv[1]);
   }
   
    while( fgets(str,256,fp) != NULL ){            //ファイルの文字がNULL文字になるまで
        if( str[0] != '\n' && ifspace(str) ){      //行の最初の文字が\nでないかつ空白行でないなら
             printf("%s",str);                     //その行を表示
        }
    }

        fclose(fp);     //ファイルを閉じる
        return 0; 
    
}

int ifspace(char *str) {            //空白行判定関数
    int i;
    char *xp;                       //文字型ポインタ変数

    i = 0;
    xp = str;                       //strを代入

    while ( *(xp + i) != '\n') {    //改行でない場合
        if ( *(xp + i) != ' ' ) {   //空白文字でないならば
            return 1;               //1を返し終了（空白行でない）
        }
        i++;                        //インクリメント
    }

    return 0;                       //0を返す（空白行）
}

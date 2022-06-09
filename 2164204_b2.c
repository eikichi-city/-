#include<stdio.h>	
#define S 4.5 //YNU秀のGP
#define A 4.0 //YNU優のGP
#define B 3.0 //YNU良のGP
#define C 2.0 //YNU可のGP
#define D 0   //YNUでは使用されない
#define F 0   //YNU不可のGP

int main()
{
    double G;          //GPAの算出結果を格納するdouble型の変数
    int ns,na,nb,nc,nd,nf;                  //取得単位数を格納するint型の変数

    printf("横浜国大での GPA の算出\n");
    ns = 10;      printf("秀　の単位数：%d\n",ns);
    na = 10;      printf("優　の単位数：%d\n",na);
    nb = 8;       printf("良　の単位数：%d\n",nb);
    nc = 7;       printf("可　の単位数：%d\n",nc);
    nd = 0;     //printf("Dの単位数：%d\n",nd); //京大で使用されている評価
    nf = 4;       printf("不可の単位数：%d\n",nf);
    
    G = (ns*S + na*A + nb*B + nc*C + nd*D +nf*F) /  //GPA　を計算する式の分子
    (ns + na + nb + nc + nd + nf);                  //GPA　を計算する式の分母
    printf("GPA = %f\n",G);                        //算出した　GPA  を表示する
    
    return 0;
}
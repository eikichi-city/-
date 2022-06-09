/*2021年曜日判定プログラム*/
#include<stdio.h>	

int main()
{
    int One,Two,Three,Four,Five,Six,Seven,Eight,Nine,Ten,Eleven,m,d,n,g,y;
    
    m=12;/*mは何月か,1<=m<=12*/
    d=31;/*dは何日か,1<=m<=31*/
    
    /*mを日数に変換*/
    if (m>=2){
        One=31;
    }
    else{
        One=0;
    }
    if(m>=3){
        Two=28;
    }
    else{
        Two=0;
    }
    if(m>=4){
        Three=31;
    }
    else{
        Three=0;
    }
    if(m>=5){
        Four=30;
    }
    else{
        Four=0;
    }
    if(m>=6){
        Five=31;
    }
    else{
        Five=0;
    }
    if(m>=7){
        Six=30;
    }
    else{
        Six=0;
    }
    if(m>=8){
        Seven=31;
    }
    else{
        Seven=0;
    }
    if(m>=9){
        Eight=31;
    }
    else{
        Eight=0;
    }
    if(m>=10){
        Nine=30;
    }
    else{
        Nine=0;
    }
    if(m>=11){
        Ten=31;
    }
    else{
        Ten=0;
    }
    if(m==12){
        Eleven=30;
    }
    else{
        Eleven=0;
    }
    
    /*エラー用*/
    if(m<1){
        printf("入力エラーです");
        return 0;
    }
    else if(m>12){
        printf("入力エラーです");
        return 0;
    }
    else if(d<1){
        printf("入力エラーです");
        return 0;
    }
    else if(d>31){
        printf("入力エラーです");
        return 0;
    }
    
    n=One+Two+Three+Four+Five+Six+Seven+Eight+Nine+Ten+Eleven+d;/*nは2021年の何日目か、n=1 が元旦*/
    g=4;/*gは2020年大晦日が木曜日であることから4*/
    y=n+g;/*曜日調整*/
    
    if (y%7==0){
        printf("日曜日");
    }
    else if (y%7==1){
        printf("月曜日");
    }
     else if (y%7==2){
        printf("火曜日");
    }
     else if (y%7==3){
        printf("水曜日");
    }
     else if (y%7==4){
        printf("木曜日");
    }
     else if (y%7==5){
        printf("金曜日");
    }
     else if (y%7==6){
        printf("土曜日");
    }
}
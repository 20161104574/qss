//
//  main.c
//  qss
//
//  Created by 宇苗 on 17/6/26.
//  Copyright © 2017年 宇苗. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // insert code here...
    FILE *fr;
    FILE *fw;
    char str1[500];
    char str2[500];
    char date[50],lat[50],sorn[50],lon[50],eorw[50],spe[50],cor[50],alt[50];
    int i;
    fr=fopen("//Users//20161104574al//desktop//GPS170510.log","r+");
    fw=fopen("//Users//20161104574al//desktop//output.csv","w+");
    
    fprintf(fw,"时间,维度,南北维,经度,东西经,地面速率,航向,海拔\n");
    while(fscanf(fr,"%s%s",str1,str2)!=EOF)
    {
        printf("结果:%s%s\n",str1,str2);
        
        for(i=0;i<2;i++)
            date[i]=str1[i+55];
        date[2]='\0';
        printf("时间：%s年",date);
        
        for(i=0;i<2;i++)
            date[i]=str1[i+53];
        date[2]='\0';
        printf("%s月",date);
        
        for(i=0;i<2;i++)
            date[i]=str1[i+51];
        date[2]='\0';
        printf("%s日",date);
        
        for(i=0;i<2;i++)
            date[i]=str1[i+7];
        date[2]='\0';
        printf("%s时",date);
        
        for(i=0;i<2;i++)
            date[i]=str1[i+9];
        date[2]='\0';
        printf("%s分",date);
        
        for(i=0;i<2;i++)
            date[i]=str1[i+11];
        date[2]='\0';
        printf("%s秒\t",date);
        
        
        for(i=0;i<8;i++)
            lat[i]=str1[i+16];
        lat[8]='\0';
        printf("维度:%s",lat);
        
        for(i=0;i<1;i++)
            sorn[i]=str1[i+25];
        sorn[1]='\0';
        printf("%s\t",sorn);
        
        
        for(i=0;i<9;i++)
            lon[i]=str1[i+27];
        lon[9]='\0';
        printf("经度:%s",lon);
        
        for(i=0;i<1;i++)
            eorw[i]=str1[i+37];
        eorw[1]='\0';
        printf("%s\t",eorw);
        
        
        for(i=0;i<5;i++)
            spe[i]=str1[i+39];
        spe[5]='\0';
        printf("地面速率:%s\t",spe);
        
        
        for(i=0;i<5;i++)
            cor[i]=str1[i+45];
        cor[5]='\0';
        printf("航向:%s\t",cor);
        
        
        for(i=0;i<4;i++)
            alt[i]=str2[i+43];
        alt[4]='\0';
        printf("海拔:%s米\n",alt);
        
        
        fprintf(fw,"%s,%s,%s,%s,%s,%s,%s,%s\n",date,lat,sorn,lon,eorw,spe,cor,alt);
        
        
    }
    
    
    fclose(fr);

    return 0;
}

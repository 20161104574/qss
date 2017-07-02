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
    char year[50],mon[50],day[50],time[50],min[50],sec[50],lat[50],sorn[50],lon[50],eorw[50],spe[50],cor[50],alt[50],num[50];
    int i;
    fr=fopen("//Users//20161104574al//desktop//qss//GPS170510.log","r+");
    fw=fopen("//Users//20161104574al//desktop//qss//output.csv","w+");
    
    fprintf(fw,"日期：年,月,日,时,分,秒,维度（单位：度）,南北维,经度（单位：度）,东西经,地面速率（单位：节）,航向（单位：度）,海拔（单位：米）,卫星数量（单位：个）\n");
    while(fscanf(fr,"%s%s",str1,str2)!=EOF)
    {
        printf("结果:%s%s\n",str1,str2);
        
        for(i=0;i<2;i++)
            year[i]=str1[i+55];
        year[2]='\0';
        printf("时间：%s年",year);
        
        for(i=0;i<2;i++)
            mon[i]=str1[i+53];
        mon[2]='\0';
        printf("%s月",mon);
        
        for(i=0;i<2;i++)
            day[i]=str1[i+51];
        day[2]='\0';
        printf("%s日",day);
        
        for(i=0;i<2;i++)
            time[i]=str1[i+7];
        time[2]='\0';
        printf("%s时",time);
        
        for(i=0;i<2;i++)
            min[i]=str1[i+9];
        min[2]='\0';
        printf("%s分",min);
        
        for(i=0;i<2;i++)
            sec[i]=str1[i+11];
        sec[2]='\0';
        printf("%s秒\t",sec);
        
        
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
        printf("海拔:%s米\t",alt);
        
        
        for(i=0;i<2;i++)
            num[i]=str2[i+39];
        num[2]='\0';
        printf("卫星个数:%s个\n",num);
        
        
        fprintf(fw,"20%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s\n",year,mon,day,time,min,sec,lat,sorn,lon,eorw,spe,cor,alt,num);
        
        
    }
    
    
    fclose(fr);

    return 0;
}

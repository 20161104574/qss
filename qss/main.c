//
//  main.c
//  qss
//
//  Created by 宇苗 on 17/6/26.
//  Copyright © 2017年 宇苗. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fr;
    //FILE *fw;
    char str1[500];
    char str2[500];
    char lat[500];
    int i;
    fr=fopen("//Users//20161104574al//desktop//GPS170510.log","r+");
    fscanf(fr,"%s%s",str1,str2);
    printf("结果:%s\n%s\n",str1,str2);
    
    for(i=0;i<6;i++)
        lat[i]=str1[i+7];
    lat[6]='\0';
    while(printf("时间:%s\t",lat)!=EOF);
    
    
    for(i=0;i<10;i++)
        lat[i]=str1[i+16];
    lat[10]='\0';
    printf("维度:%s\t",lat);
    
    
    for(i=0;i<11;i++)
        lat[i]=str1[i+27];
    lat[11]='\0';
    printf("经度:%s\t",lat);
    
    
    for(i=0;i<5;i++)
        lat[i]=str1[i+39];
    lat[5]='\0';
    printf("地面速率:%s\t",lat);
    
    
    for(i=0;i<5;i++)
        lat[i]=str1[i+45];
    lat[5]='\0';
    printf("航向:%s\t",lat);
    
    
    for(i=0;i<6;i++)
        lat[i]=str1[i+51];
    lat[6]='\0';
    printf("日期：%s\t",lat);
    
    fclose(fr);
    return 0;
}

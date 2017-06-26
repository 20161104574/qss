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
    char str1[70];
    char str2[70];
    char lat[9];
    int i;
    fr=fopen("//Users//20161104574al//desktop//GPS170510.log","r+");
    fscanf(fr,"%s%s",str1,str2);
    printf("结果:%s\n%s\n",str1,str2);
    for(i=0;i<8;i++)
        lat[i]=str1[i+16];
    lat[8]='\0';
    printf("维度: %s\n",lat);
    fclose(fr);
    return 0;
}

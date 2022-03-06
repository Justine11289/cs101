#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    FILE* fp;
    time_t curtime;
    time(&curtime);
    fp = fopen("b.txt","w+");
    fprintf(fp,"黃子庭到此⼀遊！\n");
    fprintf(fp,"現在時間:%s",ctime(&curtime));
    fclose(fp);
}
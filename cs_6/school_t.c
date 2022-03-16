#include <stdio.h>
#include <stdlib.h>

typedef struct school{
    int sch_id;             //4 bytes
    int sch_num_stu;        //4 bytes
    int sch_num_tea;        //4 bytes
    char sch_name[64];      //64 bytes
    char sch_address[128];  //128 bytes
    int sch_post_code;      //4 bytes
    int sch_num_colleges;   //4 bytes
    char sch_x;             //1 bytes  total=213bytes
}school_t;

int main(){
    unsigned long int len = sizeof(school_t);
    printf("sizeof school_t = %lu\n", len);
    return 0;
}
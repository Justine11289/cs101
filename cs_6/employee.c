#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee{
    int em_id;
    char em_name[64];
    char em_phone[12];
    int em_age;
    int em_salary;
};

int main(){
    struct employee emp[2];
    emp[0].em_id = 1;
    strcpy(emp[0].em_name, "IU Lee");
    strcpy(emp[0].em_phone, "0937123456");
    emp[0].em_age = 18;
    emp[0].em_salary = 2000000;

    emp[1].em_id = 100;
    strcpy(emp[1].em_name, "Jay Park");
    strcpy(emp[1].em_phone, "0988123456");
    emp[1].em_age = 21;
    emp[1].em_salary = 3000000;

    for(int i = 0; i < 2; i++){
        printf("Employee %d id : %d\n", i, emp[i].em_id);
        printf("Employee %d name : %s\n", i, emp[i].em_name);
        printf("Employee %d phone : %s\n", i, emp[i].em_phone);
        printf("Employee %d age : %d\n", i, emp[i].em_age);
        printf("Employee %d salary : %d\n\n", i, emp[i].em_salary);
    }
    
    return 0;
}

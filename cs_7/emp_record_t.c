#include <stdio.h>
#include <stdlib.h>

typedef struct emp_record{
    int emp_id;
    char emp_name[32];
    int emp_salary;
    int emp_age;
    char emp_phone[12];
    char emp_mail[128];
}emp_record_t;

int main(){
    struct emp_record emp_tmp[3];

    emp_tmp[0].emp_id = 0;
    emp_tmp[0].emp_age = 18;
    emp_tmp[0].emp_salary = 180000;
    snprintf(emp_tmp[0].emp_name, sizeof(emp_tmp[0].emp_name), "IU Lee");
    snprintf(emp_tmp[0].emp_phone, sizeof(emp_tmp[0].emp_phone), "0937123456");
    snprintf(emp_tmp[0].emp_mail, sizeof(emp_tmp[0].emp_mail), "iu@cgu.edu.tw");

    emp_tmp[1].emp_id = 1;
    emp_tmp[1].emp_age = 23;
    emp_tmp[1].emp_salary = 280000;
    snprintf(emp_tmp[1].emp_name, sizeof(emp_tmp[1].emp_name), "IUU Lee");
    snprintf(emp_tmp[1].emp_phone, sizeof(emp_tmp[1].emp_phone), "0912345678");
    snprintf(emp_tmp[1].emp_mail, sizeof(emp_tmp[1].emp_mail), "iuu@cgu.edu.tw");

    emp_tmp[2].emp_id = 2;
    emp_tmp[2].emp_age = 32;
    emp_tmp[2].emp_salary = 380000;
    snprintf(emp_tmp[2].emp_name, sizeof(emp_tmp[2].emp_name), "IUUU Lee");
    snprintf(emp_tmp[2].emp_phone, sizeof(emp_tmp[2].emp_phone), "1234567809");
    snprintf(emp_tmp[2].emp_mail, sizeof(emp_tmp[2].emp_mail), "iuuu@cgu.edu.tw");

    // average age
    int sum = 0;
    for(int i = 0; i < 3; i++){
        sum += emp_tmp[i].emp_age;
    }
    printf("Average age: %d\n", sum/3);

    // age sort
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < i; j++){
            if(emp_tmp[j].emp_age < emp_tmp[i].emp_age){
                emp_record_t temp = emp_tmp[j];
                emp_tmp[j] = emp_tmp[i];
                emp_tmp[i] = temp;
            }
        }
    }
    for(int i = 0; i < 3; i++){
        printf("emp_id = %d, age = %d\n", emp_tmp[i].emp_id, emp_tmp[i].emp_age);
    }

    // salary sort
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < i; j++){
            if(emp_tmp[j].emp_salary < emp_tmp[i].emp_salary){
                emp_record_t temp = emp_tmp[j];
                emp_tmp[j] = emp_tmp[i];
                emp_tmp[i] = temp;
            }
        }
    }
    for(int i = 0; i < 3; i++){
        printf("emp_id = %d, salary = %d\n", emp_tmp[i].emp_id, emp_tmp[i].emp_salary);
    }

}
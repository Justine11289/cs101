#include <stdio.h>
#include <stdlib.h>

void n_address(int n[],int* p,int f) {
    int i = 0;
    while(n[i] != f){i++;}
    p = n + i;
    printf("&n[%i]->%p, n[%i]=%i; p->%p, *p=%i\n",i, &n[i] ,i, n[i],p,*p);
}
void exchange(int* x,int*y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void ap_address(int n[],int* ap[],int size){
    int np[size];
    int num[size];
    int tmp=0,k=0;
    for(int i = 0; i < 10; i++) {np[i] = n[i];}
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(n[i] > n[j]){
                exchange(&n[i],&n[j]);
            }
        }
    }
    for(int i = 0,j = 0; i < size; i++){ap[i] = &n[j++];}
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10;j++){
            if(n[i] == np[j]){
                num[k] = j;
                k++;
            }
        }
        printf("&n[%i]->%p, n[%i]=%i ; ",num[i], &n[num[i]],num[i],n[i]);
        printf("ap[%i]->%p, *ap[%d]=%i\n",i,ap[num[i]],i,*ap[i]);
    }
 }

int main() {
    int n[]={6,4,7,2,0,9,8,1,5,3};
    int* p;
    int* ap[10];
    printf("No.1-----------------------------------\n");
    n_address(n,p,9);
    printf("No.2-----------------------------------\n");
    ap_address(n,ap,10);
    return 0;
}
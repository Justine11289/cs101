#include <stdio.h>
#include <stdlib.h>
FILE* fp;

void rec_dec(char* s){
    if(*s != '\0'){
       printf("%c,",*s);
       rec_dec(s+1);
    }
}

void hanoi(int n,char A,char B,char C)
{
	if(n==1){
		fprintf(fp,"Move disk %d from %c to %c\n",n,A,C);
	}
	else{
		hanoi(n-1,A,C,B);
		fprintf(fp,"Move disk %d from %c to %c\n",n,A,C);
		hanoi(n-1,B,A,C);
	}
}

void hanoi_tower(int n){
    fp = fopen("hanoi.txt","w+");
    hanoi(n,'A','B','C');
    fclose(fp);
}


int multiplication(int i, int j){
    if(i == 10){
        return 0;
    }
    else if(j == 9){
        printf("%d*%d=%2d\n", i, j, i*j);
        multiplication(i+1, 1);
    }
    else{
        printf("%d*%d=%2d ", i, j, i*j);
        multiplication(i, j+1);
    }
}

int main(){
    char s[]="1234567890";
    rec_dec(s);
    printf("\nfunc#1---------------------\n");
    hanoi_tower(16);
    printf("\nfunc#2---------------------\n");
    multiplication(1, 1);
    printf("\nfunc#3---------------------\n");
    return 0;
}
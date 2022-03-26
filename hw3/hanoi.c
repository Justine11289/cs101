#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void hanoi(int i,char left,char middle,char right)
{
	if(i==1){
		printf("move from %c to %c\n",left,right);
		
	}
	else{
		hanoi(i-1,left,right,middle);
		hanoi(1,left,middle,right);
		hanoi(i-1,middle,left,right);
	}
	return;
}

int main()
{
	int n=16;
	clock_t start = clock();
	hanoi(n,'L','M','R');
	clock_t end = clock();
	double duration = (double)(end-start)/CLOCKS_PER_SEC;
	printf("Duration:%f seconds\n",duration);
	return 0;
}





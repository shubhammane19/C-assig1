#include<stdio.h>

int main(){

	int x = 19;
	int sum =0;
	sum = x++ + --x - x++;
	printf("%d\n", sum);
	printf("X : %d\n", x);
	
	int sum2 =0;
	x=19;
	
	sum2 = --x + x-- - x++ + ++x;
	printf("%d\n", sum2);
	printf("%d\n", x);
	
	
	//x=19,18,19,20   sum = 19+19=38-18= 20+20 = 40
	//x =19,18,17,18 		  sum = 18+18=36 ,  36-17 = 19, 19+19 = 38  
}
#include<stdio.h>
	
int main(){
	
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(num %3 == 0){
		
		printf("Number is divisible by 3");
	}else{
	
		printf("Number is not divisible by 3");
	}
}
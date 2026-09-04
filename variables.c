//1.Static Variable
#include<stdio.h>

void counter(){
	static int shi = 60;
	printf("%d",shi);
	shi++;
}
int main(){
	counter();
	counter();
	counter();
	return 0;
}   //outut: 60,61,62

//2.without static variable
#include<stdio.h>

void counter(){
	 int shi = 60;
	printf("%d",shi);
	shi++;
}
int main(){
	counter();
	counter();
	counter();
	return 0;
}
//output: 60 60 60

//using three variable
#include <stdio.h>
int main(){
int a,b,temp;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("%d%d",a,b);

	return 0;
}

//using two variable
#include <stdio.h>
int main(){
int a,b,temp;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d%d",a,b);

	return 0;
}

//for loop
#include <stdio.h>
int main(){

int n,i;
printf("Enter any Number:");
scanf("%d",&n);

for(i=1;i<=n;i++){
	printf(" %d ",i);
}

	return 0;
}

//while loop

#include <stdio.h>
int main(){

int n,i=1;
printf("Enter any Number:");
scanf("%d",&n);

while(i<=n){
	printf(" %d ",i);
	++i;
}
	return 0;
}

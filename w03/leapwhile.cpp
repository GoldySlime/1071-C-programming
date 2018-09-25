#include <stdio.h>

int main(){
	
	int year;
	printf("Enter Year: ");
	scanf("%d",&year);
	while(year>=0){
	
		if((year%4==0&&year%100!=0) || year%400==0)
			printf("Year %d is a leap year.",year);
		else
			printf("Year %d is not a leap year.",year);
		printf("\nEnter Year: ");
		scanf("%d",&year);
		}
}

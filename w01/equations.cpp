#include <stdio.h>
#include <math.h>
int main(){
	double x1,x2;
	int a,b,c;
	printf("Enter A B C : ");
	scanf("%d %d %d",&a,&b,&c);
	printf("For equation %d x^2 %d x + %d =0, two roots are",a,b,c);
	if(b*b-4*a*c>=0){
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		printf("\nX1 = %.1f", x1);
		printf("\nX2 = %.1f", x2);
	}else{
		printf("\nNo real roots");
	}	
	
}
	


#include<stdio.h>
#include <math.h>
int main(){
	float BMI;
	float h,w;
	printf("Enter your Weight: ");
	scanf("%f",&w);
	printf("Enter your Height: ");
	scanf("%f",&h);
	while(h>=0){
		h=h/100;
		BMI=w/pow(h,2);
		printf("Your BMI is %.1f \n",BMI);	
		if(BMI<18.5)
			printf("You are Underweight\n");
		else if(BMI<24)
			printf("You are Normal\n");
		else if(BMI<27)
			printf("You are Overweight\n");
		else if(BMI<30)
			printf("You are Low Obesity\n");
		else if(BMI<35)
			printf("You are Middle Obesity\n");
		else if(BMI>35)
			printf("You are High Obesity\n");
		printf("Enter your Weight: ");
		scanf("%f",&w);
		printf("Enter your Height: ");
		scanf("%f",&h);		
	}
}

#include<stdio.h>
int main(){
	float w=0,h=0;
	double bmi=0.0;
	printf("Input Weight (kg.) : ");
	scanf("%f",&w);
	printf("Input height (m.) : ");
	scanf("%f",&h);
	
	bmi = w/(h*h);
	printf("\nBMI :%.2f",bmi);
	
}

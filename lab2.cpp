#include<stdio.h>
int main(){
	float mid , final , hw , Total ;
	printf("Input Score\n");
	printf("*****************************\n");
	printf("Mid-Term\t(40%%) : ");
	scanf("%f",&mid);
	printf("Final\t\t(40%%) : ");
	scanf("%f",&final);
	printf("Homework\t(20%%) : ");
	scanf("%f",&hw);
	printf("*****************************\n");
	Total = mid + final + hw ;
	printf("Total = %.2f\n",Total);
	if (Total >=80)printf("Grade = A\n");
		else if(Total >=70)printf("Grade = B\n");
			else if(Total >=60)printf("Grade = C\n");
				else if(Total >=50)printf("Grade = D\n");
	else printf("Grade = F\n");
	printf("*****************************");
}

#include <stdio.h>
int main(){
    char opr;
    int result,num1,num2;
    printf("Please enter number1:");
    scanf("%d",&num1);
    printf("Please enter number2:");
    scanf("%d",&num2);
    printf("Please enter operator:");
    scanf(" %c",&opr);
    switch(opr){
        case '+':
        result=num1+num2;
        printf("Result is %d",result);
            break;
        case '-':
        result=num1-num2;
        printf("Result is %d",result);
            break;
        case '*':
        result=num1*num2;
        printf("Result is %d",result);
            break;
        case '/':
            if(num2==0){
            	printf("cannot devined by zero");
			}
			else{
				result=num1/num2;
				printf("Result is %d",result);
			}
			break;
        case '%':
        	if(num2==0){
            	printf("cannot devined by zero");
			}
			else{
				result=num1%num2;
				printf("Result is %d",result);
			}
			break;
    }
 }

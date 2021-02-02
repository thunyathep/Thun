#include <stdio.h>

int main(){
	float p ;
    printf("Product price : ");
    scanf("%f",&p);
    float vat , Newprice , discount , Netpay ;
    vat = p*0.07;
    Newprice = p + vat;
    printf("*****************************************\n");
	if(Newprice >= 1 && Newprice <= 10000){
		discount = Newprice * 0.05 ;
		Netpay = Newprice - discount ;
		printf("*    Price         =\t%.2f\t\t*\n",p);
		printf("*    Price+Vat     =\t%.2f\t\t*\n",Newprice);
		printf("*    Discount      =\t%.2f\t\t*\n",discount);
		printf("*    Net pay       =\t%.2f\t\t*\n",Netpay);
		printf("*****************************************\n");
		return 0 ;
	}
	else{
		discount = Newprice * 0.10 ;
		Netpay = Newprice - discount ; 
		printf("*    Price         =\t%.2f\t\t*\n",p);
		printf("*    Price+Vat     =\t%.2f\t\t*\n",Newprice);
		printf("*    Discount      =\t%.2f\t\t*\n",discount);
		printf("*    Net pay       =\t%.2f\t\t*\n",Netpay);
		printf("*****************************************\n");
		return 0 ;
	}
}

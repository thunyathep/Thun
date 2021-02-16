#include<stdio.h>
int main()
{
    int a[100],odd[100],even[100],i,n,h = 0,j = 0;
    printf("Input Array a : \n");
    printf("---------------\n");
    for (i=1;;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        if(a[i]<0)break;
    }
    n = i-1;
    for(i = 1 ; i <= n;i++){
        if(a[i]%2!=0){
            odd[h] = a[i];
            h++;
        }
        else{
            even[j] = a[i];
            j++;
        }
    }
    printf("Odd Number : ");
    for(i=0;i<h;i++){
        printf("%d ",odd[i]);
    }
    printf("\nTotal = %d",h);
    printf("\nEven Numer : ");
    for(i=0;i<j;i++){
        printf("%d ",even[i]);
    }
    printf("\nTotal = %d",j);
}

#include<stdio.h>

int main()
{
    int n,i,j;
    printf("End : ");
    scanf("%d",&n);
    printf("  ");
    for(j=1;j<=n;j++)
    printf("%4d",j);
    printf("\n");
    for(j=1;j<=n;j++)
    {
        printf("%2d",j);
        for(i=1;i<=n;i++){
            if(i<=j)
            printf("%4d",i*j);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>

int main()
{
    int m,i,n,j,a[10][10];
    float avg = 0;
    printf("Input order of matrix A m.n = ");
    scanf("%d,%d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=m;i++)
    {
        printf("\n");
        for(j=1;j<=n;j++)
        {
            printf("%6d",a[i][j]);
            avg = avg + a[i][j];
        }
        printf("   Average of row =  %5.2f\n",avg/n);
        avg = 0;
    }

}

#include<stdio.h>

int main()
{
    int a[50],b[50],c[50],i,j,k=0,na,nb;
    printf("Input set a :\n");
    printf("-------------\n");
    for (i=1;;i++){
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        if(a[i]<0)break;
    }
    na = i-1;
    printf("Input set b :\n");
    printf("-------------\n");
    for (j=1;;j++){
        printf("b[%d] = ",j);
        scanf("%d",&b[j]);
        if(b[j]<0)break;
    }
    nb = j-1;
    for(i=1;i<=na;i++)
    {
        for(j=1;j<=nb;j++)
        {
            if(a[i]==b[j])
            {
                k++;
                c[k]=a[i];
            }
        }
    }
    printf("-----------\n");
    printf("The intersection of set a and b : ");
    if(k==0)
    {
        printf("empty set");
    }
    else
    {
        printf("{");
    for(i=1;i<k;i++)
    {
        printf("%d,",c[i]);
    }
    printf("%d}",c[k]);
    }
}

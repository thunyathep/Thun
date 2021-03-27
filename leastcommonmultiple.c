#include<stdio.h>
main()
{
    int a,b,x,y,i;
    printf("Input a : ");
    scanf("%d",&a);
    printf("Input b : ");
    scanf("%d",&b);
    x = a;
    y = b;
    for(i=0;;i++)
    {
        if(x==y)break;
        if(x<y)
        {
            x+=a;
        }
        else
        {
            y+=b;
        }
    }
    printf("The least common multiple = %d",x);
}

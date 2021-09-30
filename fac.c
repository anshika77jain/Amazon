#include<stdio.h>
void main()
{
    int i, n, f=1;
    printf("Enter no. of which factorial is to be calculated\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        f*=i;
    printf("The factorial of %d is %d ",n,f);
}

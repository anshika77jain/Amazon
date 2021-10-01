#include<stdio.h>
int fib(int n)
{
    static int i,n1=0,n2=1,n3;
    printf("\n%d %d ",n1,n2);
     for(i=2;i<=n;i++)
        {
    n3=n1+n2;
    printf("%d ",n3);
    n1=n2;
    n2=n3;
        }
        }
int fib1(int n4)
{
if(n4<=1)
        return (n4);
    else
        return (fib1(n4-1)+fib1(n4-2));
  }
int main()
{
    int n4,n;
     printf("Enter the no. of terms of fibonacci series\n");
    scanf("%d",&n);
    printf("%d ",fib(n));
    printf("\n//////////////////////////////////////////////");
    printf("\nEnter index no. to find value at\n");
scanf("\n%d",&n4);
printf("\nValue at Index %d = %d",n4,fib1(n4));
return 0;
}

#include <stdio.h>
 
int fact(int);
 
void main()
{
 int no,factorial;
 
  	printf("Enter a number to calculate it's factorial\n");
  	scanf("%d",&no);
  	factorial=fact(no);
    printf("Factorial of the num(%d) = %d\n",no,factorial);
//printf("Factorial of the num(%d) = %d\n",no,fact(no));//another way of calling a function//comment above two lines if you want to use this
}
 
int fact(int n)
{
    if(n==0||n==1)
     return 1;
 else
  return n*fact(n-1);
   
}

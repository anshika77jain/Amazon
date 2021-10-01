#include<stdio.h>
int main()
{
int m=21,u,c;
printf("*************************RULES*************************************\n");
printf("YOU HAVE TO CHOOSE 1,2,3 OR 4 MATCHSTICKS.\n");
printf("IF YOU CHOOSE MORE THAN 4 MATCHSTICK U HAVE TO START FROM BEGINING.\n");
printf("WHO EVER IS FORCED TO PICK LAST MATCHSTICK WILL LOSE THE GAME.\n");
printf("*******************************************************************\n");
printf("\nTotal matchsticks = %d",m);
while(1)
{
    printf("\nPick 1,2,3,or 4 matchsticks.\n");
    scanf("%d",&u);
    if((u<1)||(u>4))
    {
        printf("Sorry! U pick wrong matchstick. Please play again.\n");
        break;
    }
    m=m-u;
    printf("Matchsticks left are = %d",m);
    c=5-u;
    printf("\nComputer has picked %d matchsticks.",c);
    m=m-c;
    printf("\nMatchsticks left = %d\n",m);
    if(m==1)
    {
        printf("\n*************COMPUTER WINS*************");
        printf("\nYOU WERE LOSE BY THE COMPUTER.\n");
        printf("*****************************************");
        break;
    }
}
return 0;
}

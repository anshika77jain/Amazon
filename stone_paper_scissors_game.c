#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int StonePaperScissor(char you, char comp)
{
    if(you==comp)
    {
        return 0;
    }
    if(you=='s' && comp=='p')
    {
        return -1;
    }
    else if(you=='p' && comp=='s')
    {
        return 1;
    }
     if(you=='s' && comp=='c')
    {
        return 1;
    }
    else if(you=='c' && comp=='s')
    {
        return -1;
    }
     if(you=='p' && comp=='c')
    {
        return -1;
    }
    else if(you=='c' && comp=='p')
    {
        return 1;
    }
     if(you=='c' && comp=='s')
    {
        return -1;
    }
    else if(you=='s' && comp=='c')
    {
        return 1;
    }
}
int main()
{
    char you, comp;
    int number;
    srand(time(0)); //used to take random numbers from starting
    number=rand()%100+1;
    if(number<=33)
    {
        comp='s';
    }
    else if(number>33&&number<=66)
    {
        comp='p';
    }
    else
    {
        comp='c';
    }
    printf("Enter 's' for stone, 'p' for paper and 'c' for scissors\n");
    scanf("%c",&you);
    int result=StonePaperScissor(you,comp);
    printf("You choose %c and computer choose %c \n",you,comp);
    if(result==0)
    {
        printf("Game Draw\n");
    }
    else if(result==1)
    {
        printf("you win\n");
    }
    else
    {
        printf("You lose");
    }
    return 0;
}

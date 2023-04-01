#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int snakewatergun(char you,char comp)

{
    if (you==comp)
    {
       return 0;
    }
    if (you=='s' && comp=='g')
    {
        return -1;
    }
    else if (you=='g' && comp=='s')
    {
        return 1;
    }
    if (you=='w' && comp=='s')
    {
        return -1;
    }
    else if (you=='s' && comp=='w')
    {
        return 1;
    }
    if (you=='g' && comp=='w')
    {
        return -1;
    }
    else if (you=='w' && comp=='g')
    {
        return 1;
    }
}   
int main()

{
    char you,comp;
    int number=rand()%100+1;
    srand(time(0));
    if (number<33)
    {
        comp='s';
    }
    else if (number>33  && number<66)
    {
       comp='w';
    }
    else{
        comp='g';
    }
    
    
    printf("enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%s",&you);
    int result=snakewatergun(you,comp);
    printf("you choose %c and comp choose %c\n",you,comp);
    
    if (result==0)
    {
         printf(" %d is my & hybrid");
    }
    else if (result==1)
    {
        printf("you won\n");
    }
    else
    {
        printf("you loose\n");
    }
    
    
    return 0;
}
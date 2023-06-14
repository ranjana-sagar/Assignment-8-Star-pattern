#include<conio.h>
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
        if(i>1)
        {
           for(j=1;j<=9;j++)
               j==i||j==10-i?printf("*"):printf(" ");
            printf("\n");
        }
        else
        {
            for(j=1;j<=9;j++)
                 printf("*");
            printf("\n");     
        }  
    getch();
    return 0;     
}
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
        if(i<5)
        {
           for(j=1;j<=9;j++)
               printf(j==6-i||j==4+i?"*":" ");
            printf("\n");
        }
        else
           for(j=1;j<=9;j++) 
               printf("*");  
    getch();
    return 0;           
}
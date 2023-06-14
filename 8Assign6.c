#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
            printf(j>=i&&j<=10-i?"*":" ");
        printf("\n");    
    }
    getch();
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char c;
    for(i=1;i<=7;i++)
    {
        c='A';
        for(j=1;j<=13;j++)
            if(j<=8-i||j>=6+i)
            {
                printf("%c",c);
                j<7?c++:c--;
            }
            else
            {
                if(j==7)
                   c--;
                printf(" ");   
            }
        printf("\n");    
    }
    getch();
    return 0;
}
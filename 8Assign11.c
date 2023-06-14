#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char c;
    for(i=1;i<=5;i++)
    {
        c='A';
        for(j=1;j<=9;j++)
            j>=6-i&&j<=4+i?printf("%c",c),j<5?c++:c--:printf(" ");
        printf("\n");    
    }
    getch();
    return 0;
}
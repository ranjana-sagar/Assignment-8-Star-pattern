#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char c;
    for(i=1;i<=4;i++)
    {
        c='A';
        for(j=1;j<=7;j++)
            j>=i&&j<=8-i?printf("%c",c),j<4?c++:c--:printf(" ");
        printf("\n");       
    }
    getch();
    return 0;
}
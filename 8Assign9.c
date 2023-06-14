#include<stdio.h>
#include<conio.h>
int main()
{
    int k,i,j;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
            j>=i&&j<=8-i?printf("%d",k),j<4?k++:k--:printf(" ");
        printf("\n");        
    }
    getch();
    return 0;
}
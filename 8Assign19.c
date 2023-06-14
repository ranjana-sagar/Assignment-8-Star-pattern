#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=13;i++)
        if(i<4)
        {
            for(j=1;j<=19;j++)
                (j>=4-i&&j<=6+i)||(j>=14-i&&j<=16+i)?printf("*"):printf(" ");
            printf("\n"); 
        }
        else
            if(i==4)
            {
                for(j=1;j<=19;j++)
                    if(j>=1&&j<=6||j>=13&&j<=19)
                       printf("*");
                    else
                        switch(j)
                        {
                            case 7:printf("M");break;
                            case 8:printf("y");break;
                            case 9:printf("S");break;
                            case 10:printf("i");break;
                            case 11:printf("r");break;
                            case 12:printf("G");break;
                        }    
                printf("\n"); 
            }                 
            else
            {
                for(j=1;j<=19;j++)
                    j>=i-3&&j<=23-i?printf("*"):printf(" ");
                printf("\n");    
            }                                                                 
    getch();
    return 0;
}
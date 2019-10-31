#include<stdio.h>
int main()
{
        int a;
        printf("enter the year\n");
        scanf("%d",&a);
        if(a%4==0)
        printf("it is a leap year\n");
        else
                printf("it is not a leap year\n");
}

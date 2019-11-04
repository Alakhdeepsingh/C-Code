#include<stdio.h>
int main()
{
        int a,sum=0,c;
        printf("enter the number\n");
        scanf("%d",&a);
        while(a!=0)
        {
        c=a%10;
        sum+=c;
        a=a/10;
        }
        printf("sum of digits is %d\n",sum);
}


OUTPUT:
enter the number
999      
sum of digits is 27


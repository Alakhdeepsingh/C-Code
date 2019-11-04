#include<stdio.h>
struct fraction
{
 int num;
 int den;
};
int main()
{
 int rnum,rden;
 struct fraction f1,f2; 
     printf("enter numerator and denominator of first fraction\n");
     scanf("%d%d",&f1.num,&f1.den);
     printf("enter numerator and denominator of second fraction\n");
     scanf("%d%d",&f2.num,&f2.den); 
     rnum=f1.num*f2.num;
     rden=f1.den*f2.den;
 printf("\nproduct is : %d/%d\n",rnum,rden);
}

Output:

enter numerator and denominator of first fraction
1 9

enter numerator and denominator of second fraction
1 9

product is :

1/81

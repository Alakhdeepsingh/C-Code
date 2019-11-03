#include<stdio.h>
        
int check(int b[],int m,int o)
{       
        int p=-1,mid;
 int f=1,l=m;
 mid=(f+l)/2;           

while(f<=l)
 {
        mid=(f+l)/2;
        if(b[mid]==o)
        {
                p=mid;
                break;
        }
        else if(o>b[mid])
        {
                f=mid+1;
        }
        else if (o<b[mid])
        {
                l=mid-1;
        }
        
}       
                        return p;
        
}     
       
void main()
{       
        int n,num,index;
        printf("enter the array size\n");
        scanf("%d",&n);
        int a[n];
        printf("enter the array elements in assending order\n");
        for(int i=1;i<=n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("now enter the number which you want to check\n whether it is present or not in entered array\n");
        
        scanf("%d",&num);
        index=check(a,n,num);
        if(index==-1)   
        printf("element is not found\n");
        else
        printf("element is found at the position %d \n",index);

}

/*****************************************************************************************************
OUTPUT:
enter the array size
8       
enter the array elements in assending order
1       
2               
3       
4       
5       
6       
7       
8       
now enter the number which you want to check
 whether it is present or not in entered array
6       
element is found at the position 6 
********************************************************************************************************/

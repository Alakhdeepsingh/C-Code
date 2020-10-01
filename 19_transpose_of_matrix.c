#include <stdio.h>

int main()
{
int m, n, a, d, matrix[10][10], transpose[10][10];
printf("Enter the number of rows and columns of matrix \n ");
scanf("%d%d",&m,&n); printf("Enter the elements of matrix \n");
/*Input Matrix*/  
for( a = 0 ; a < m ; a++ )
  {
    for( d = 0 ; d < n ; d++ )
     {
      scanf("%d",&matrix[a][d]);
     }
}


/*Perform Transposing*/
for( a = 0 ; a < m ; a++ )
  {
    for( d = 0 ; d < n ; d++ )
    {
      transpose[d][a] = matrix[a][d]; //Assigning Value
    }
}

/*Printing Transpose of input matrix*/
printf("Transpose of entered matrix :-\n");
for( a = 0 ; a < n ; a++ )
    {
      for( d = 0 ; d < m ; d++ )
      {
       printf("%d\t",transpose[a][d]); 
      }
printf("\n");
}
return 0;
}

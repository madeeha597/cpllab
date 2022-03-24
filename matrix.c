#include<stdio.h>
int main()
{
  
   int m,n,p,q,i,j,k;
	printf("enter size of matrix A:");
	scanf("%d%d",&m,&n);
	prinft("enter size of matrix B:");
	scanf("%d%d",&p,&q);

     if (n!=p)
  {
     printf("matrix muliplication not possible\n");
	return 1;
  }
   
 int a[m][n], b[p][q] ,c[m][q];
  printf("enter data into matrix A:");
 
 for (i=0;i<m;i++)
  {
	for(j=0;j<n;j++)
         {
            

#include<stdio.h>
int btod(int);
int main()
{
   int bin,decimal;
   printf("enter a binary number");
   scanf("%d",&bin);

   
  decimal=btod(bin);
  printf("decimal equivalent = %d\n",decimal);
   return 0;
}

   int btod(int bin)
 {
    if(bin==0)
    {
      return 0;
    }
    else
    {
      return btod(bin/10)*2+(bin%10);
    }
 }
   
 

   

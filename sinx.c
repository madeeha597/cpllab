#include<stdio.h>
#include<math.h>
#define PI 3.14156
int main()
{ 
	float x,degree;
	float sum;
	float term,nume,deno;
	int  i;
	printf("Enter the degree:");
 	scanf("%f",&degree);
	x = degree*(PI/180);
	sum = 0;
	nume = x;
	deno = 1;
	i = 1;

	do{
	    term = nume/deno;
	    sum = sum + term;
	    nume = -1*nume*x*x;
	    deno = deno*(i-1);
          }while(fabs(term)>=0.00001);
	printf("computed value of sin(%f) from library function=%f\n

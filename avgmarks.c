#include<stdio.h>
 int main()
{
   struct student
    {
       int stu_id;
	char name[20];
	float lang1_marks;
	float mat_marks;
	float comp_marks;
	float avg;
     };

    struct student s[20];
    int i,n;

	printf("enter the number of records:");
	scanf("%d",&n);

	printf("enter student details...\n",n);

   for(i=0;i<n;i++)
   {
	printf("enter student id:");
	scanf("%d",&s[i].stu_id);

 	printf("enter student name:");
	scanf("%s",s[i].name);

        printf("enter marks of lang1:");
	scanf("%f",&s[i].lang1_marks);
	
	printf("enter marks of mat :");
	scanf("%f",&s[i].mat_marks);

	printf("enter marks of comp :");
	scanf("%f",&s[i].comp_marks);
   }

    for(i=0;i<n;i++)
    {
      s[i].avg=(s[i].lang1_marks + s[i].mat_marks + s[i].comp_marks)/3;
    }
   printf(" students scoring above average marks....\n");
   printf("\n\nid\tname\taverage\n\n");

   for(i=0;i<n;i++)
    {
       if(s[i].avg>=35.0)
    printf("%d\t%s\t%f\n",s[i].stu_id,s[i].name,s[i].avg);
     
    }
 
   return 0;
 
 }
   
    



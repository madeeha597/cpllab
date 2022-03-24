#include<sthdio.h>
 int str_length(char[]);
 int str_compare (char[],char[]);
 int str_concat (char[],char[]);
 int main()
{
 char str[50]
 char srt1[50]
 char str_des[100], str_src[50];
 int length, comp_res;
 
 printf(" enter a string:");
 scanf("%s",str);

 length=str_length(str);

 printf(" the length of %s is %d\n",str,length);
 printf(" enter two strings for string compare:");
 scanf("%s %s",str1,str2);
 comp_res=str_compare9str1,str2);
if (comp_res < 0)
 {
  printf("string |%s|" is les thn string |"%s|"\n",str1,str2);
 }
 else if (comp_rse==0)
{
 printf("string |"%s|" us same as string |"%s|"\n",str1,str2);
}

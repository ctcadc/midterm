#include<stdio.h>
int main (void)
{
     char string[50];
     int i=0,num=0;
     char c;

     printf("please input a sentence contains no more than 50 characters ,' ',\t'");
     gets(string);

     if(string[0]!=' ')
     {
         num=1;

     }
     
     for(i=0;(c=string[i])!='\0';i++)
     {
         if(c==' '&&string[i+1]!=' ')
        {
            num++;
        }
     }

     printf("%d/n",num);

     return 0;
}

        
    
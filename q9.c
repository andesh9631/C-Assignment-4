//9. Write a program to print cubes of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int i,n=10,s=0,a;

    for(i=1,s=0;n>=i;i++)
        {  
            a=i*i*i;
             s=s+a;
            printf("\ncubes is  %d is %d ",i,a);
           
        }
        printf("\nsquares of first 10 natural number is  %d ",s);
        return 0;

}  

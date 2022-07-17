//8. Write a program to print squares of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int i,a,n=10,s=0;

    for(i=1,s=0;n>=i;i++)
        {
            a=i*i;
            s=s+a;
            printf("\nThe square of  %d is %d",i,a);
            
        }
        printf("\nsquares of first 10 natural number is  %d ",s);
        return 0;

}  

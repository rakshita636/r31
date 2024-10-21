#include<stdio.h>
void main()
{
    int n ;
    printf("Enter the number :");
    scanf("%d",&n);
    if (n>0)
    {
        printf("  the numberis positive" );
    }
    else if(n<0)
       {
         printf(" the number is negative");
       }
    else
    {
       printf(" the number is zero");
    }

}

 /*************************************************************************
 *  c Program to check given number is perfect number or not
 * __________________
 * Created by: Mohamed Maher . 
 * Embedded System Developper.
 * Penteration system Tester.
 * LinkedIn: https://www.linkedin.com/in/mohamed-maher-37b167a5/
 * ************************************************************************/
 
#include<stdio.h>
 
int main()
 
{

     int number, sum=0, i=1;
     printf("Please enter a number to check perfect number\n");
     scanf("%d",&number);
     while(i<number)
     {
 
           if(number%i==0)
           {
               sum=sum+i;
           }
 
           i++;
     }
      if(sum==number) 
           printf("\nEntered number %d is a perfect number",i);
     else
          printf("\nEntered number %d is not a perfect number",i);
     return 0;
}
//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
float input();
float sum(float a,float b);
float output(float c);

float input()
{
   float x;
   scanf("%f",&x);
   return x;
}
float sum(float a,float b)
{
   return(a+b);
}
float output(float c)
{
   printf("the sum of given numbers is %f \n",c);
   return 0;
}
int main()
{
    int n,i;
   printf("enter the number of terms to be added:\n");
   scanf("%d",&n);
   float a[n];
   for(i=0;i<n;i++)
   {
     printf("enter %d number\n",i+1);
     a[i]=input();
   }
   float b=0;
   for(i=0;i<n;i++)
  {
   b=sum(b,a[i]);
  }
  output(b);
  return 0;
}

//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
   float h,b,d,vol;
   printf("enter the height,breadth,depth");
   scanf("%f%f%f",&h,&b,&d);
   vol=((h*d)+d)/(3*b);
   printf("volume of the tromboloid is %f",vol);
   return 0;
}

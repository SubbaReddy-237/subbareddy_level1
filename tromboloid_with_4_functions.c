//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
int main()
{
   float h,b,d,vol;
   float height();
   float breadth();
   float depth();
   float volume(float h,float b,float d);
   h=height();
   b=breadth();
   d=depth();
   vol=volume(h,b,d);
   printf("volume=%f",vol);
   return 0;
}
float height()
{
   float a;
   printf("Enter the H of the tromboloid:");
   scanf("%f",&a);
   return a;
}
float depth()
{
   float b;
   printf("Enter the D of tromboloid:");
   scanf("%f",&b);
   return b;
}
float breadth()
{
   float c;
   printf("Enter the D of tromboloid:");
   scanf("%f",&c);
   return c;
}
float volume(float h,float b,float d)
{
   float v=((h*d)+d)/(3*b);
   return v;
}

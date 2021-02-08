//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
int main()
{
   float x1,y1,x2,y2,distance;
   printf("input x1:");
   scanf("%f",&x1);
   printf("input y1:");
   scanf("%f",&y1);
   printf("input x2:");
   scanf("%f",&x2);
   printf("input y2:");
   scanf("%f",&y2);
   distance=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
   printf("distance between the two points:%.4f",sqrt(distance));
   printf("distance:");
   return 0;
}

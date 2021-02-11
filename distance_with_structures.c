//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct point { int x,y;};
int distance(struct point u,struct point v)
{
   int distance;
   distance=sqrt(((u.x-v.x)*(u.x-v.x))+((u.y-v.y)*(u.y-v.y)));
   return distance;
}
int main()
{
   struct point u,v;
   printf("enter x1");
   scanf("%d",&u.x);
   printf("enter x2");
   scanf("%d",&v.x);
   printf("enter y1");
   scanf("%d",&u.y);
   printf("enter y2");
   scanf("%d",&v.y);
   printf("distance between(%d,%d)and(%d,%d) is%d",u.x,v.x,u.y,v.y,distance(u,v));
   return 0;
}


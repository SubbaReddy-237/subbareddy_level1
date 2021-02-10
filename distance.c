//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
int inputx ()
{
   int x;
   scanf("%d",&x);
   return x;
}
int inputy ()
{
   int y;
   scanf("%d",&y);
   return y;
}
void
print(int x1,int x2,int y1,int y2,int distance)
{
   printf("distance between (%d,%d)and(%d,%d) is%d",x1,x2,y1,y2,distance);
}
int output(int x1,int x2,int y1,int y2)
{
   return(sqrt((((x2-x1)*(x2-x1))+((y2-y2)*(y2-y1)))));
}
int main()
{   
   int x1,x2,y1,y2;
   printf("enter x1");
    x1=inputx ();
   printf("enter x2");
    x2=inputx ();
   printf("enter y1");
    y1=inputy ();
   printf("enter y2");
    y2=inputy ();
   int distance=output(x1,x2,y1,y2);
   print(x1,x2,y1,y2,distance);
   return 0;
}

//WAP to find the sum of two fractions.
#include<stdio.h>
typedef struct fraction
{
int numerator, denominator;
}
Fractions;
Fractions input(Fractions temp)
{
printf("Enter the numerator:\n");
scanf("%d",&temp.numerator);
printf("Enter the denominator:\n");
scanf("%d",&temp.denominator);
return temp;
};
void show_output(Fractions temp,Fractions a, Fractions b)
{
printf("Sum of two fraction is %d/%d+%d/%d = %d/%d\n",a.numerator,a.denominator,b.numerator,b.denominator,temp.numerator,temp.denominator);
};
int gcd(int x,int y)
{
    if (x ==0)
    {
        return y;
    }
    return gcd(y%x,x);
};
Fractions calc_output(Fractions a, Fractions b)
{
    Fractions c;
    int x,y;
    x = (a.numerator * b.denominator) + (b.numerator * a.denominator);
    y = (a.denominator * b.denominator);

    
    c.numerator = x /gcd(x,y);
    c.denominator = y /gcd(x,y);
    return c;
};
int main()
{
Fractions a,b,c;
int gcd;
printf("Enter 1st fraction:\n");
a = input(a);
printf("Enter 2nd fraction:\n");
b = input(b);
c = calc_output(a,b);
show_output(c,a,b);
return 0;
}

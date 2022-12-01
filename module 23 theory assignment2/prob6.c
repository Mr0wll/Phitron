#include <stdio.h>
#include<string.h>
int facto(int a);
double ratio(int a,int b);
int main() 
{
  int x,y;
  scanf("%d %d",&x,&y);
  printf("Ratio of factorials of %d and %d is --> %lf",x,y,ratio(x,y));
    return 0;
}
int facto(int a)
{
    int fact=a;
    for(int i=1;i<a;i++)
    {
        fact=fact*i;
    }
	return fact;
}
double ratio(int a,int b)
{
   double x=facto(a);
   double y=facto(b);
   
   
   return x/y;
}

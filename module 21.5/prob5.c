
#include<stdio.h>
int calc(char b, int x, int y);
int main()
{
    char b;
    int z,x, y;
    scanf("%c",&b);
    scanf("%d %d",&x,&y);
    z=calc(b,x,y);
    printf("%d\n",z);
}
int calc(char b, int x, int y)
{
    if (b=='+') 
        return x+y;
    else if (b=='-')
        return x-y;
    else if (b=='*')
        return x*y;
    else if (b=='/')
        return x/y;
    
}
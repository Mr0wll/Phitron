#include <stdio.h>
#include<string.h>
int chk_one(long long int n);
int chk_seven(long long int n);
int chk_nine(long long int n);
int main() 
{
   long long int n;
   scanf("%lld",&n);
   if(chk_one(n)==1 && chk_seven(n)==1&&chk_nine(n)==1)
   printf("Yes");
   else
   printf("No");

    return 0;
}
int chk_one(long long int n)
{
    long long int r=0;
    while(n!=0)
    {
        if(n%10==1)
        return 1;
        
        n=n/10;
    }
    return 0;
}
int chk_seven(long long int n)
{
    long long int r=0;
    while(n!=0)
    {
        if(n%10==7)
        return 1;
        
        n=n/10;
    }
    return 0;
}
int chk_nine(long long int n)
{
    long long int r=0;
    while(n!=0)
    {
        if(n%10==9)
        return 1;
        
        n=n/10;
    }
    return 0;
}


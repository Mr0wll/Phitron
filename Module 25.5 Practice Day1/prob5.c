#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int n)
{
    while (n>0)
    {   
        if (n==1) return 1;
        else 
        {
            int a= n + sum(n-1);
            return a;
        }    
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    printf("%d",sum(n));
}


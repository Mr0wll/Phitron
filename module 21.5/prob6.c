#include<stdio.h>
void divisor(int x);
int main()
{
    int a;
    scanf("%d", &a);
    divisor(a);
}
void divisor(int x)
{
    for (int i = 1; i <=x;i++) 
    {
        if (x%i==0)
        {
            printf("%d ", i);
        }
    }
}
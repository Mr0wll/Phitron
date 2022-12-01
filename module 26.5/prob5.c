#include <stdio.h>
int func(int n, int nona[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (nona[i]%10==0)
        {
            sum += nona[i];
        }
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d\n",&n);
    int ara[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    printf("%d",func(n,ara));
}
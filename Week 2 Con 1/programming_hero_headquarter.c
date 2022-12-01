#include <stdio.h>
int main()
{
    int n, k;
    int sum = 0;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            sum += (i*100)+j;
        }
    }
    printf("%d\n", sum);
} 
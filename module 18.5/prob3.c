#include <stdio.h>
int main()
{
    int N,sum=0;
    scanf("%d", &N);
    int ara[N];
    for(int i=0; i<N; i++)
        scanf("%d", & ara[i]);
    for (int i=0; i<N; i++)
    {    
        printf("%d ", ara[i]);
        sum+=ara[i]%10;
    }
    printf("\nSum = %d ", sum);

}
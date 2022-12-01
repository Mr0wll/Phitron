//https://codeforces.com/problemset/problem/71/A
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0; i<=n; i++)
    {
        char ara[500];
    fgets(ara, sizeof(ara), stdin);
    
    if (strlen(ara)-1>10)
    {
        printf("%c",ara[0]);
        printf("%d",strlen(ara)-3);
        printf("%c\n",ara[strlen(ara)-2]);
        
    }
    else
    {
        for (int i=0; i<strlen(ara)-1; i++)
        {
            printf("%c",ara[i]);
        }
        printf("\n");
    }
    }
    
}
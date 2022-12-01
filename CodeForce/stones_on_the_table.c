//https://codeforces.com/problemset/problem/266/A
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char s[500];
    scanf("%d", &n);
    getchar();
    fgets(s, sizeof(s), stdin);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
            count++;
    }
    printf("%d", count);
}
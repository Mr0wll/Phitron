//https://codeforces.com/problemset/problem/281/A
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    fgets(s, sizeof(s),stdin);
    if ('a'<=s[0] && s[0]<='z')
    {
        s[0]-=32;
    }
    puts(s);
}
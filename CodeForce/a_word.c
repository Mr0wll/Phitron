//https://codeforces.com/problemset/problem/59/A
#include <stdio.h>
#include <string.h>
int main()
{
    char s[500];
    fgets(s, sizeof(s), stdin);
    int up_count = 0,low_count = 0;
    for (int i = 0; i <strlen(s)-1; i++)
    {
        if ('a'<=s[i] && s[i]<='z') low_count+=1;
        else up_count+=1;
    }
    if (up_count > low_count)
    {
        for (int i = 0; i <strlen(s)-1; i++)
        {
            if ('a'<=s[i] && s[i]<='z') s[i]-=32;
        }
    }
    else if (low_count > up_count)
    {
        for (int i = 0; i <strlen(s)-1; i++)
        {
            if ('A'<=s[i] && s[i]<='Z') s[i]+=32;
        }
    }
    else if (up_count == low_count)
    {
        for (int i = 0; i <strlen(s)-1; i++)
        {
            if ('A'<=s[i] && s[i]<='Z') s[i]+=32;
        }
    }
    puts(s);
}
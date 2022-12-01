#include <stdio.h>
#include <string.h>
int main()
{
    char b[100];
    fgets(b, 100, stdin);
    
    for (int i = 0; i < strlen(b)-1; i++)
    {
        if (b[i]>'a' && b[i]<'z')
            b[i]-=32;
        else if (b[i]>'A' && b[i]<'Z')
            b[i]+=32;
    }
    puts(b);
}
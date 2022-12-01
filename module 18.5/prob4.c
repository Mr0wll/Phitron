#include <stdio.h>
#include <string.h>
int main()
{
    char buf[50];
    fgets(buf, sizeof(buf), stdin);
    printf("%c",buf[0]);
    for (int i = 1; i <strlen(buf); i++)
    {
        if (buf[i]!=buf[i-1])
        {
            printf("%c",buf[i]);
        }
    }
    
}
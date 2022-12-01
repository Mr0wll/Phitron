#include <stdio.h>
#include<string.h>
int main()
{
    char s[50];
    scanf("%s",s);
    int x,y=0 ;
    scanf("%d",&x );
    getchar();
    for(int i=0; i<strlen(s); i++)
    {
        s[i]=((s[i]-'a'+x)%26)+'a';
    }
    puts(s);

    return 0;
}
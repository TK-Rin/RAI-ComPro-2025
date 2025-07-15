#include <stdio.h>
#include <string.h>

int main()
{
    char name[]="ILOVEPHOOM";
    int len = strlen(name);
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c\n", name[i]);
    }
    return 0;
}
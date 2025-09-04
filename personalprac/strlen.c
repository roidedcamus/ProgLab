#include <stdio.h>

int string_length(char* s);

int main()
{
    char stri[40];
    printf("Enter a string: ");
    scanf("%s", stri);

    int len = string_length(stri);
    printf("%i\n", len);
}

int string_length(char* s)
{
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    return n;
}

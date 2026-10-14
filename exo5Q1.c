#include <stdio.h>
#include <string.h>

int ReadChar(char s[])
{
    printf("Enter a string: ");
    scanf("%s", s);

    return strlen(s);
}

int LongestCommonPrefix(char s1[], char s2[], int length)
{
    int i = 0;

    while (i < length && s1[i] == s2[i])
    {
        i++;
    }

    return i;
}

void PrintChar(char s1[], int commonLength)
{
    printf("\"");

    for (int i = 0; i < commonLength; i++)
    {
        printf("%c", s1[i]);
    }

    printf("\"\n");
}

int main(void)
{

    char s1[200], s2[200];

    int l1 = ReadChar(s1);
    int l2 = ReadChar(s2);
    int minLength = (l1 < l2) ? l1 : l2;
    int commonLength = LongestCommonPrefix(s1, s2, minLength);
    PrintChar(s1, commonLength);
    return 0;
}
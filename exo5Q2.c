#include <stdio.h>
#include <string.h>

int ReadChar(char s[])
{
    printf("Enter a string: ");
    scanf("%s", s);
    return strlen(s);
}

int LongestCommonSuffix(char s1[], char s2[], int l1, int l2)
{
    int i = l1 - 1;
    int j = l2 - 1;
    int commonLength = 0;

    while (i >= 0 && j >= 0)
    {
        if (s1[i] == s2[j])
        {
            commonLength++;
            i--;
            j--;
        }
        else
        {
            break;
        }
    }
    return commonLength;
}

void PrintCommonSuffix(char s1[], int l1, int commonLength)
{
    printf("Longest Common Suffix: \"");

    int startIdx = l1 - commonLength;
    for (int i = startIdx; i < l1; i++)
    {
        printf("%c", s1[i]);
    }

    printf("\"\n");
}

int main()
{
    char s1[200], s2[200];

    int l1 = ReadChar(s1);
    int l2 = ReadChar(s2);

    int commonLength = LongestCommonSuffix(s1, s2, l1, l2);

    PrintCommonSuffix(s1, l1, commonLength);

    return 0;
}
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
int LongestCommonPrefix(char s1[], char s2[], int length)

{
    int i = 0;

    while (i < length && s1[i] == s2[i])
    {
        i++;
    }

    return i;
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
void PrintChar(char s1[], int commonLength)
{
    printf("Longest Common Prifix: \"");

    for (int i = 0; i < commonLength; i++)
    {
        printf("%c", s1[i]);
    }

    printf("\n");
}

int main()
{

    char s1[200], s2[200];
    int l1 = ReadChar(s1);
    int l2 = ReadChar(s2);
    int minLength = (l1 < l2) ? l1 : l2;
    int commonPrifix = LongestCommonPrefix(s1, s2, minLength);
    int commonSuffix = LongestCommonSuffix(s1, s2, l1, l2);

    PrintChar(s1, commonPrifix);
    PrintCommonSuffix(s1, l1, commonSuffix);

    return 0;
}
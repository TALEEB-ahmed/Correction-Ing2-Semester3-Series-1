#include <stdio.h>
int FillVector(int V[], int length)
{
    printf("Enter the length of the vector: ");
    scanf("%d", &length);

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &V[i]);
    }

    return length;
}

int RemoveOccurenceValue(int V[], int length, int val)
{
    int j = 0;

    for (int i = 0; i < length; i++)
    {
        if (V[i] != val)
        {
            V[j] = V[i];
            j++;
        }
    }

    return j;
}

void PrintVector(int V[], int length)
{
    printf("{ ");

    for (int i = 0; i < length; i++)
    {
        printf("%d", V[i]);

        if (i < length - 1)
            printf(", ");
    }

    printf(" }\n");
}

int main(void)
{
    int V[100], val, length = 0;

    length = FillVector(V, length);

    printf("Original vector: ");
    PrintVector(V, length);

    printf("Enter the value to remove : ");
    scanf("%d", &val);

    length = RemoveOccurenceValue(V, length, val);

    printf("Updated vector: ");
    PrintVector(V, length);

    return 0;
}
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

int InsertNumberInSameOrder(int V[], int val, int length)
{
    int i = length - 1;

    while (i >= 0 && V[i] > val)
    {
        V[i + 1] = V[i];
        i--;
    }

    V[i + 1] = val;

    return length + 1;
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
    int V[100], val = 0, length = 0;

    length = FillVector(V, 0);

    printf("Original vector: ");
    PrintVector(V, length);

    printf("Enter the number to insert: ");
    scanf("%d", &val);

    length = InsertNumberInSameOrder(V, val, length);

    printf("Vector after insertion: ");
    PrintVector(V, length);

    return 0;
}
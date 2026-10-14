#include <stdio.h>

int SumPnHornerSchem(int x, int V[], int length)
{
    int result = V[0];

    for (int i = 1; i < length; i++)
    {
        result = result * x + V[i];
    }

    return result;
}

int main(void)
{
    double x;
    int length;
    int V[100];

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the number of coefficients (maximum 100): ");
    scanf("%d", &length);
    // length+=1;

    if (length < 1 || length > 100)
    {
        printf("Invalid number of coefficients.\n");
        return 1;
    }

    printf("Enter the coefficients in order (an, an-1, ..., a0):\n");

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &V[i]);
    }

    printf("The result is: %d\n",
           SumPnHornerSchem(x, V, length));

    return 0;
}

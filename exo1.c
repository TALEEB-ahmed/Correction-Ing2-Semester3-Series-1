#include <stdio.h>

int SumFirstNPowers(int N)

{
    int sum = 0, i = 1;
    while (N > 0)
    {
        sum += i;
        i *= 2;
        N--;
    }

    return sum;
}

int main()

{
    int N, result = 0;

    printf("Enter a number N: ");
    scanf("%d", &N);

    result = SumFirstNPowers(N);
    printf("the result is : %d\n", result);

    return 0;
}
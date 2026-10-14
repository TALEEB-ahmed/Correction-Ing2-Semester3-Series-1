#include <stdio.h>

int SumOfDigits(int N)
{
    int sum = 0;
    int Digit = 0;
    while (N > 0)
    {
        Digit = N % 10;
        N = N / 10;
        sum++;
    }
    return sum;
}

int main()
{
    int N;
    printf("Enter a number N: ");
    scanf("%d", &N);
    printf("the result is : %d\n", SumOfDigits(N));

    return 0;
}
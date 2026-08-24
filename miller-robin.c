#include <stdio.h>

long long power(long long a, long long d, long long n)
{
    long long result = 1;

    while (d > 0)
    {
        if (d % 2 == 1)
            result = (result * a) % n;

        a = (a * a) % n;
        d = d / 2;
    }

    return result;
}

int millerRabin(long long n, long long a)
{
    long long d, x;
    int r;

    d = n - 1;
    r = 0;

    while (d % 2 == 0)
    {
        d = d / 2;
        r++;
    }

    x = power(a, d, n);

    if (x == 1 || x == n - 1)
        return 1;

    for (int i = 1; i < r; i++)
    {
        x = (x * x) % n;

        if (x == n - 1)
            return 1;
    }

    return 0;
}

int isPrime(long long n)
{
    long long bases[] = {2, 3, 5, 7, 11};
    int i;

    if (n < 2)
        return 0;

    if (n == 2 || n == 3)
        return 1;

    if (n % 2 == 0)
        return 0;

    for (i = 0; i < 5; i++)
    {
        if (bases[i] >= n)
            break;

        if (!millerRabin(n, bases[i]))
            return 0;
    }

    return 1;
}

int main()
{
    long long n;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if (isPrime(n))
        printf("%lld is probably prime.\n", n);
    else
        printf("%lld is composite.\n", n);

    return 0;
}
#include <stdio.h>

typedef unsigned long long ull;

ull combination(int n, int r)
{
    if (r > n) return 0;
    if (r > n / 2) r = n - r;
    if (r == 0) return 1;

    ull result = 1;
    for (int i = 1; i <= r; i++)
    {
        result *= (n - i + 1);
        result /= i;
    }
    return result;
}

int main()
{
    int n = 5, r = 3;
    printf("%llu\n", combination(n, r));
    return 0;
}

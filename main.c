#include <stdio.h>
#include <ctype.h>
#include <time.h>

int strcompare(char* s1, char* s2)
{
    int index = 0;
    while (1)
    {
        char c1 = tolower(s1[index]);
        char c2 = tolower(s2[index]);

        if (c1 != c2)
            return -1;

        if (c1 == '\0' && c2 == '\0')
            return 1;

        ++index;
    }
}

int mystrcopy(char* from, char* to)
{
    int fromLen = 0, toLen = 0;
    char* fp;
    char* tp;

    for (fp = from; *fp; ++fp)
        ++fromLen;

    for (tp = to; *tp; ++tp)
        ++toLen;

    if (toLen > fromLen)
        return -1;

    for (int i = 0; i < fromLen; ++i)
        to[i] = from[i];

    return 0;
}

int fib_tail(int n, int a, int b)
{
    if (n == 0)
        return a;
    return fib_tail(n - 1, b, a + b);
}

int fib_straight(int n)
{
    if (n <= 1)
        return n;
    return fib_straight(n-1) + fib_straight(n-2);
}

int main() {

    return 0;
}

#include <stdio.h>
int muldiv(int x, int y)
{
    int res = 0;
    while (y > 0)
    {
        if (y & 1)
            res = res + x;

        x = x << 1;
        y = y >> 1;
    }
    return res;
}

int main()
{
    int x = 5;
    int y = 6;

    printf("%d", muldiv(x, y));
}
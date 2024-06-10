#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/*
 * 判断m是否为完全数
 * 参数说明：
 *      - m：unsigned，待判断的正整数
 * 返回值说明：
 *      - bool，如果m是完全数，返回true；否则返回false。
 */
bool is_perfect(unsigned m)
{
    // TODO

    int sum = 0, num = 1;
    for (num = 1; num < m; num++)

    {
        if (m % num == 0)

        {
            sum += num;
        }
        else
        {
            num += 0;
        };
    }
    if (sum == num)

    {
        return true;
    }
    else
    {
        return false;
    }

    // END OF TODO
}

static void print_perfect(unsigned a, unsigned b)
{
    int c = 0;
    for (unsigned i = a; i <= b; ++i)
        if (is_perfect(i))
        {
            ++c;
            printf("(%d)", i);
        }
    if (!c)
        printf("()");
    putchar('\n');
}

int main()
{
    unsigned a, b;

    scanf("%u%u", &a, &b);
    print_perfect(a, b);

    return 0;
}

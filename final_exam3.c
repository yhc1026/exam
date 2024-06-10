#include <stdio.h>

/*
 * 利用斐波那契数列求黄金分割比例
 *
 * 参数说明：
 *      - n：int, 斐波那契数列的项数
 * 返回值说明：
 *      - double，黄金分割比例
 *
 * 提示：斐波那契数列每项的值都是整数
 * 注意：不能也不需要用递归方法
 */
double phi(int n)
{
    // TODO
    int cnt = 3;
    float arr[29] = {1, 1};
    float p = 0, q = 0;
    for (cnt = 3; cnt <= n; cnt++)
    {

        arr[cnt - 1] = arr[cnt - 2] + arr[cnt - 3];
    }
    p = (float)arr[n - 2];
    q = (float)arr[n - 1];
    return p / q;
    // END OF TODO
}

int main()
{
    int n;

    scanf("%d", &n);
    printf("%.5lf\n", phi(n));

    return 0;
}

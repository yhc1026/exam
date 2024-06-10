/*
1. 本题需要的数据较多。因此，为了避免你在本地调试时反复输入，已将测试用例写在了一个数据文件q4.in中，其内容如下：
7 2 4 9 6 3 8 5 1 10 0
上述数据产生的输出是：
0 0 0 7 0 0 2 4 0 9 6 3 8 5 1 10
2. 如果这个文件不存在，那么你就要从键盘手动输入。
3. 如果你的程序编译后是a.out，那在命令行里，你可以这样运行程序 a.out < q4.in ，避免重复从键盘输入
*/

#include <math.h>
#include <stdio.h>

#define MAXN 512

int a[MAXN];
int b[MAXN][MAXN];
/*
 * 将压缩到一维数组的二维方阵还原
 * 首先要根据一维数组的非0元素个数m，计算二维方阵的阶数n。
 * 提示：n接近于sqrt(2m)
 *
 * 参数说明：
 *      - a：int[]，存储压缩数据的一维数组。其中的第一个0值只表示结尾，不是压缩数据。
 *      - b：int[][MAXN]，待还原的方阵。
 * 返回值说明：
 *      - int。方阵的阶数。
 */
int restore_matrix(int a[], int b[][MAXN])
{
    // TODO
    int i = 0, cnt = 0, m = 1;
    float n = 0;
    for (i = 0;; i++)
    {
        if (a[i] != 0)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    n = sqrt(2 * cnt);
    // while ((int)n / m != 0)
    //{
    //     m++;
    // }
    m = (int)n;
    int t = 0, s = 0, j = 0;
    for (t = 0; t < m; t++)
    {
        for (s = 0; s < m; s++)
        {
            if (s >= m - 1 - t)
            {
                b[t][s] = a[j];
                j++;
            }
            else
            {
                b[t][s] = 0;
            }
        }
    }
    return m;
    // END OF TODO
}

int main()
{
    int i, j;
    i = 0;
    while (1)
    {
        scanf("%d", &a[i]);
        if (a[i] == 0)
            break;
        ++i;
    }

    int n = restore_matrix(a, b);

    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("%d ", b[i][j]);
        }
        putchar('\n');
    }

    return 0;
}

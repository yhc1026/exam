#include <stdio.h>
#include <string.h>

/*
 对于原始字符串s和结果字符串t：
    - 指针p从s开头向后，找到第一个非空格字符；
    - 指针q从s尾部向前，找到第一个非空格字符；
    - 将指针p、q之间的字符复制到t中；
    - 字符串t封尾。
*/

/*
 * 去除字符串两端空格的函数trim
 * 将字符串开头和末尾的所有空格字符去除
 *
 * 参数说明：
 *      - s：char*，原始字符串
 *      - t：char*，去掉所有首尾空格后的字符串
 * 返回值说明：
 *      - 无
 *
 */
void trim(char *s, char *t)
{
    // TODO
    char *p = 0, *q = 0;
    p = s;
    q = s;
    while (*q)
    {
        q++;
    }
    q--;
    while (*p == ' ')
    {
        p++;
    }
    while (*q == ' ')
    {
        q--;
    }
    int i = 0;
    for (i = 0; p != q; p++)
    {
        *(t + i) = *p;
        i++;
    }
    return t;
    // END OF TODO
}

#define MAXN 512

extern void trim(char *s, char *t);

int main()
{
    char s[MAXN + 1], t[MAXN + 1];

    fgets(s, MAXN, stdin);
    char *p = strchr(s, '\n');
    if (p)
        *p = '\0';

    trim(s, t);
    printf("(%s)\n", t);

    return 0;
}

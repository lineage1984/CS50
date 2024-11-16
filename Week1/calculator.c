#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    // 这里的 z 可以简化
    int z = x + y;

    printf("%i\n", x + y);
    // 其实关于简化的界限我也很模糊，我自己在写程序的时候经常纠集这样的问题，一个功能的划分
    // 老师不建议将上面的写成一行，如下
    // printf("%i\n", get_int("x: ") + get_int("y: "))

    // 数据类型的最大长度
    int dollars = 1;
    while (true)
    {
        char c = get_char("Here's %i. Doule it and give it to the next person? ", dollars);
        if (c == 'y')
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
    }

    // 学习一下为什么除法不能得到一个无限循环的结果
}
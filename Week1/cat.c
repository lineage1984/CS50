#include <cs50.h>
#include <stdio.h>

void meow(void);
void meow1(int n);

int main(void)
{
    // 最原始的方法
    printf("First method\n");
    printf("meow\n");
    printf("meow\n");
    printf("meow\n");

    // 使用 while
    printf("\nSecond method\n");
    int i = 3;
    while (i > 0)
    {
        printf("meow\n");
        i--;
    }

    // 使用函数
    printf("\nThird method\n");
    
    for (int i = 0; i < 3; i++)
    {
        meow();
    }

    // 使用带参数的函数
    printf("\nfourth method\n");
    // 其实使用 times 替代 n，使脚本更加一目了然
    int n = get_int("Number: ");
    meow1(n);
}

void meow(void)
{
    printf("meow\n");
}

// 增加了参数
void meow1(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
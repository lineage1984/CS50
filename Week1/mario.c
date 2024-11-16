#include <stdio.h>

void print_row(int row);

int main(void)
{
    const int n = 3;

    // What's the comment
    for (int i = 0; i < n; i++)
    {
        print_row(n);
    }
}



void print_row(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
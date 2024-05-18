#include <stdio.h>

int main() 
{
    int x = 5;
    int y = 10;

    if (x == 5) 
    {
        printf("x 等于 5\n");
    } 
    else if (x == 10) 
    {
        printf("x 等于 10\n");
    } 
    else 
    {
        printf("x 既不等于 5 也不等于 10\n");
    }

    for (int i = 0; i < 5; i++) 
    {
        printf("循环计数: %d\n", i);
    }

    int sum = 0;
    for (int i = 1; i <= 10; i++) 
    {
        sum += i;
    }
    printf("1 到 10 的和为: %d\n", sum);

    int arr[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++) 
    {
        printf("数组元素: %d\n", arr[i]);
    }

    int a = 5;
    int b = 3;
    int c = a + b;
    printf("c 的值: %d\n", c);

    return 0;
}

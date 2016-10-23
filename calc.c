#include <stdio.h>

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

int main(){
    int x;
    int y;
    char op;

    printf("%s", "Enter num1: ");
    scanf("%d", &x);

    printf("%s", "Enter num2: ");
    scanf("%d", &y);

    printf("%s", "+ - * / : ");
    op = getchar();
    op = getchar();

    printf("%s\n------\n", "OUTPUT");
    if (op == '+')
    {
        x + y;
        printf("%d\n", add(x, y));
    }

    if (op == '-')
    {
        x - y;
        printf("%d\n", sub(x, y));
    }

    if (op == '/')
    {
        x / y;
        printf("%d\n", div(x, y));
    }

    if (op == '*')
    {
        x * y;
        printf("%d\n", mul(x, y));
    }
    return 0;
}

int add(int x, int y)
{
    int sum = 0;
    sum = x + y;
    return sum;
}

int sub(int x, int y)
{
    int sum = 0;
    sum = x - y;
    return sum;
}

int mul(int x, int y)
{
    int sum = 0;
    sum = x * y;
    return sum;
}

int div(int x, int y)
{
    int sum = 0;
    sum = x / y;
    return sum;
}

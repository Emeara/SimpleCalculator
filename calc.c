#include <stdio.h>

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int expo(int x, int y);

int main(){
    int x;
    int y;
    char op;

    printf("%s", "Enter 1st Number: ");
    scanf("%d", &x);

    printf("%s", "Enter 2nd Number: ");
    scanf("%d", &y);

    printf("%s", "+ - * / ^ : ?");
    op = getchar();
    op = getchar();

    printf("%s\n------\n", "RESULT");
    if (op == '+')
    {
        x + y;
        printf("%d\n", add(x, y));
    }

    else if (op == '-')
    {
        x - y;
        printf("%d\n", sub(x, y));
    }

    else if (op == '/')
    {
        x / y;
        printf("%d\n", div(x, y));
    }

    else if (op == '*')
    {
        x * y;
        printf("%d\n", mul(x, y));
    }

    else if (op == '^')
    {
        x ^ y;
        printf("%d\n", expo(x, y));
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

int expo(int x, int y)
{
    int sum = 1;
    while(y != 0)
    {
        sum=sum*x;
        y--;
    }
    return sum;
}
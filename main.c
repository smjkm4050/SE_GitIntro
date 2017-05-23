#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    printf("TODO: sub\n");
    return -1;
}

int mult(int a, int b)
{
    printf("TODO: mult\n");
    return -1;
}

double div(int a, int b)
{
    printf("TODO: div\n");
    return -1;
}

int main(int argc, char** argv)
{
    printf("Add 1, 2 : %d\n", add(1, 2));
    printf("Sub 1, 2 : %d\n", sub(1, 2));
    printf("Mult 1, 2 : %d\n", mult(1, 2));
    printf("Div 5, 10 : %lf\n", div(5, 10));
    return 0;
}

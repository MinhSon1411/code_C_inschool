#include <stdio.h>
#include <math.h>
int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    if (b == 0)
    {
        printf(" 0 ");
    }
    else
    {
        float c = (float)a / b;
        printf("%d %d %d %0.2f %d", a + b, a - b, a * b, c, a % b);
    }
}



#include <stdio.h>
int main()
{
    long int n;
    long int sotachra;
    long int s = 0;

    scanf("%ld", &n);
    while (n != 0)
    {
        sotachra = n % 10;
        s += sotachra;
        n /= 10;
    }
    printf("%ld", s);
}
#include <stdio.h>
#include <math.h>
int main()
{
	int n, a[100], x, dem = 0, c;
	scanf("%d", &n);
	x = n;
	while (n != 0)
	{
		dem++;
		n /= 10;
	}
	for (int i = dem; i >= 1; i--)
	{
		a[i] = x % 10;
		x /= 10;
	}
	if (a[dem] == 0)
	{
		a[dem] = a[1];
		for (int i = 2; i <= dem; i++)
		{
			printf("%d", a[i]);
		}
	}
	else
	{
		c = a[1];
		a[1] = a[dem];
		a[dem] = c;
		for (int i = 1; i <= dem; i++)
		{
			printf("%d", a[i]);
		}
	}
}
#include <stdio.h>
void khoitao(int a[][100],int n)
{	int d=0,t=1,hang= n-1,cot=n-1;
	while (d<=n/2)
	{	for (int i=d;i<=cot;i++)
			a[d][i]=t++;
		for (int i=d+1;i<=hang;i++)
			a[i][hang]=t++;
		for (int i=cot-1;i>=d;i--)
			a[hang][i]=t++;
		for (int i=hang-1;i>d;i--)
			a[i][d]=t++;
		d++;
		hang--;
		cot--;
		
			
	}
}
int main ()
{	int n;
	scanf ("%d",&n);
	int a[100][100];
	khoitao(a,n);
	for (int i=0;i<n;i++)
	{	for (int j=0;j<n;j++)
			printf ("%d ",a[i][j]);
		printf ("\n");
	}
	return 0;
}
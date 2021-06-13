#include<stdio.h>
#include<string.h>
int main()
{
	int n; 
	scanf("%d",&n);
	while(n--)
	{
		char a[501];
		scanf(" %s",a);
		int q=0, w=0, k=0;
		int p=strlen(a);
		for(int i=0;  i<p; i++)
		{
			if(a[i]%2!=0)
			{
				q=1;
			}
			w*=10;
			w+=a[i];
			k*=10; 
			k+=a[p-1-i];
		}
		if(q==0&&w==k) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
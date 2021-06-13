#include<stdio.h>
#include<string.h>
#include<ctype.h>

void thg(char* c)
{
	int i;
	int size=strlen(c);
	for(i=0; i<size; i++)
	{
	   
	   
	   		c[i]=tolower(c[i]);
	   
	}
	
}
int main()
{
	int k;
	scanf("%d\n",&k);
	for(int i=0;i<k;i++) {
	char a[1000];
	fgets(a,999,stdin);
	char b[1000][40];
	char z[1000][40];
	thg(a);
	int c=0,d=0;
	char *p;
	p=strtok(a," ");
	while(p!=NULL)
	{
	
				strncpy(b[c++],p,1);
				strcpy(z[d++],p);
		p=strtok(NULL," ");
	}
	for(int i=0; i<d; i++)
	{ 
	   for(int j=0;j<strlen(z[i]) ;j++) {
	   	 	if(j==0) {
	 z[i][j]=	toupper(z[i][j]);
		   }
		   
			printf("%c",z[i][j]);
		
	}
	printf(" ");
	
	
 }	
 printf("\n");
}
}